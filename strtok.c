/* strtok example */
#include <stdio.h>
#include <string.h>

int main()
{
  char *argv[256];
  int argc = 0;

  char line[] = "procA | procB | procC";
  printf("%s\n", line);

  char *token = strtok(line, "|");
  // argv[0] = token;

  while (token != NULL)
  {
    argv[argc++] = token;
    token = strtok(NULL, " \n");
  }
  argv[argc] = '\0';

  printf("strtok():\n");
  for (int i = 0; i < argc; i++)
  {
    printf("token[%d] = %s\n", i, argv[i]);
  }

  return 0;
}
