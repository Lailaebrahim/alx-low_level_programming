#include "shell.h"
int main() {
  char *path = _getenv("PATH");
  if (path != NULL) {
    printf("PATH=%s\n", path);
  } else {
    printf("PATH not found\n");
  }

  char *user = _getenv("USER");
  if (user != NULL) {
    printf("USER=%s\n", user);
  } else {
    printf("USER not found\n");
  }

  char *home = _getenv("HOME");
  if (home != NULL) {
    printf("HOME=%s\n", home);
  } else {
    printf("HOME not found\n");
  }

  char *nonExistent = _getenv("NON_EXISTENT_VARIABLE");
  if (nonExistent != NULL) {
    printf("NON_EXISTENT_VARIABLE=%s\n", nonExistent);
  } else {
    printf("NON_EXISTENT_VARIABLE not found\n");
  }

  return 0;
}
