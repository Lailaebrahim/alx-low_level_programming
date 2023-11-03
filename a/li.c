#include "shell.h"



int main()
{
  Node  *head = build_path_list();
  printlist(head);
  deletelist(&head);
}
