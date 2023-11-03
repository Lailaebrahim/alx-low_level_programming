#include "shell.h"

/**
 * _cd - changes the working dir of the current shell executon env
 * @args: pointer to tokenized argument
 *
 * Return: 0 one success, -1 otherwise.
 */
int _cd(char **args, char *line, int *flag)
{
if (args[2] != NULL)
{perror("too many arguments to \"cd\"\n");
return (-1); }
if (args[1] == NULL || (_strcmp(args[1], "~") == 0) || (_strcmp(args[1], "$HOME") == 0))
return (cd_home());
if (_strcmp(args[1], ".") == 0)
return (cd_dot());
else
{
return(cd_to(args));
}
}

/**
 * _cd
 */
int cd_home(void)
{
int ret = 0, flag = 0;
char oldPwd[BUFFER_SIZE];
char *p_pwd = NULL;
const char* homeDir = _getenv("HOME");
getcwd(oldPwd, sizeof(oldPwd));
p_pwd = _strdup(oldPwd);
if (p_pwd == NULL)
{
free(p_pwd);
return (-1); }

if (homeDir == NULL)
{my_setenv("OLDPWD", p_pwd, &flag);
ret = -1; }

if (chdir(homeDir) != 0)
{perror("chdir failed\n");
ret = -1; }
 
if (my_setenv("PWD", homeDir, &flag) != 0)
{perror("_setenv failed\n");
ret = -1; }
 
if (my_setenv("OLDPWD", p_pwd, &flag) != 0)
{perror("_setenv failed\n");
ret = -1; }

free(p_pwd);
return (ret);
}

/**
 * _cd_to
 */
int cd_dot(void)
{
  int ret = 0, flag = 0;
char Pwd[BUFFER_SIZE];
char *cp_pwd = NULL;
getcwd(Pwd, sizeof(Pwd));
cp_pwd = _strdup(Pwd);
if (cp_pwd == NULL)
{perror("getcwd failed\n");
free(cp_pwd);
return (-1); }
 
if (my_setenv("OLDPWD", cp_pwd, &flag) != 0)
{
ret = -1; }

free(cp_pwd);
return (ret);
}

/**
 * _cd_to
 */
int cd_to(char **args)
{
int ret = 0;
int flag = 0;
char old_dir[BUFFER_SIZE], *new_dir = NULL, *cp_old_dir = NULL;
new_dir = args[1];
getcwd(old_dir, sizeof(old_dir));
cp_old_dir = _strdup(old_dir);

if (cp_old_dir == NULL)
{perror("getcwd failed\n");
free(cp_old_dir);
return (-1); }

if (chdir(args[1]) != 0)
{perror("chdir failed\n");
ret = -1; }

if (my_setenv("PWD", new_dir, &flag) != 0)
{
ret = -1; }

if (my_setenv("OLDPWD", cp_old_dir, &flag) != 0)
{
ret = -1; }

free(cp_old_dir);
return (ret);
}
