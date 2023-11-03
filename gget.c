#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream) {
  static char buffer[BUFFER_SIZE];
  static size_t buffer_pos = 0;
  static size_t buffer_len = 0;

  if (buffer_pos >= buffer_len) {
    buffer_len = read(fileno(stream), buffer, BUFFER_SIZE);
    buffer_pos = 0;
    if (buffer_len == -1) {
      return -1;
    }
  }

  if (buffer_len == 0) {
    return 0;
  }

  char *line_start = buffer + buffer_pos;
  char *line_end = memchr(line_start, '\n', buffer_len - buffer_pos);
  if (line_end == NULL) {
    line_end = buffer + buffer_len;
  } else {
    line_end++;
  }

  size_t line_length = line_end - line_start;
  if (*lineptr == NULL || *n < line_length + 1) {
    *n = line_length + 1;
    *lineptr = realloc(*lineptr, *n);
    if (*lineptr == NULL) {
      perror("realloc");
      return -1;
    }
  }

  memcpy(*lineptr, line_start, line_length);
  (*lineptr)[line_length] = '\0';
  buffer_pos += line_length;

  return line_length;
}

int main() {
  char *line = NULL;
  size_t n = 0;
  ssize_t line_length;

  while ((line_length = custom_getline(&line, &n, stdin)) != -1) {
    printf("Read line: %s\n", line);
  }

  if (line_length == -1) {
    perror("custom_getline");
  }

  free(line);
  return 0;
}
