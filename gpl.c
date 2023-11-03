#include"shell.h"


int main() {
  char * str = _getenv("PATH");
  Node *pathList = NULL;
  Node *temp = NULL;
   _print(str);
  
  _print("\n");
  
  pathList = build_path_list();
  printlist(pathList);
  while (pathList != NULL) {
    temp = pathList;
    pathList = pathList->next;
    free(temp->data);
    free(temp);
  }

  return 0;
}
