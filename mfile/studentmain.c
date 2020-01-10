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
  int g = 1;
  char count;
  int realcount;
  printf("Insert number of students\n");
  while (g == 1)
  {
    fgets(input, 256, stdin);
    sscanf(input, "%s", &count);
    if (isdigit(count))
    {
      g = 0;
      realcount = atoi(&count);
      realcount = realcount;
    }
    else
    {
      printf("Invalid input, please plug in a number\n");
      g = 1;
    }

  }
  while (i != realcount)
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
  printf("Now, you can search for students by number");
  while (g == 0)
  {
    printf("Print student location (#)\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s" "%s" "%d" "%d", student.first, student.last, &student.age, &student.id);
    if (isdigit(*student.first))
      {
      p = atoi(student.first);
      p = p -1 ;
      printStudent(&safe[p]);
      }
  }
}

