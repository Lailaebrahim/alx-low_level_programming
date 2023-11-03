#include"shell.h"

int main()
{
  char *test = build_path("ls", "/usr/bin");
  printf("%s", test);

}
