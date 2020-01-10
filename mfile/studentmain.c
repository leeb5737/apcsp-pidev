#include <stdio.h>
#include "student.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  int i;
  struct Info student;
  char input[256];
  int p;
  struct Info safe[1000];
  while (1)
    {
    printf("Insert student info (first last age id):\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s" "%s" "%d" "%d", student.first, student.last, &student.age, &student.id);
    if (isdigit(*student.first))
      {
      p = atoi(student.first);
      p = p -1 ;
      printStudent(&safe[p]);
      }
    else
      {
      safe[i] = student;
      printStudent(&safe[i]);
      i = i+1;
       }
    }

}

