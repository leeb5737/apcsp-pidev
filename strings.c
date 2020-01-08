#include <stdio.h>
#include <string.h>

int main()
{
  char strl[2200];
  char stru[] = "abcdefghijklmnopqrstuvwxyz";
  char stra[53];
    for (int i = 0; i<26; i++)
        {
          strl[i] = 'a' + i;
        }
  if (strcmp(strl, stru) == 0)
	{
	printf("The strings are the same\n");
	}
  else
	{
        printf("The strings are the same\n");
	}

  strl[26] = '\0';

  printf("%s %s\n", strl, stru);

    for (int i = 0; i<strlen(strl); i++)
        {
          strl[i] = strl[i] + ('A' - 'a');
        }

  printf("%s %s\n", strl, stru);
  if (strcmp(strl, stru) == 0)
        {
        printf("The strings are the same\n");
        }
  else
        {
        printf("The strings are the different\n");
	}
  strcpy(stra, strl);
  strcat(stra, stru);
  printf("%s\n", stra);
}
