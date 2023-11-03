#include "shell.h"
int main() {
  // Test the setEnvironmentVariable function
  _setenv("MY_VARIABLE", "my_value", 1);
  _setenv("ANOTHER_VARIABLE", "another_value", 0);

  // Print the environment to verify the changes
  for (int i = 0; environ[i] != NULL; i++) {
    printf("%s\n", environ[i]);
  }

  return 0;
}
