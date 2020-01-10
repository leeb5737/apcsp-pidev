#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
float carea(float i)
{
  float a;
  a = i*i*3.14;
  return a;
}

int main(int argc, char *argv[])
{
char input[256], name[256];
float age;
int arg = 0;
float r;
int c = 0;
float csize;
int g;
if (argc == 3)
{
if(isdigit(*argv[2]))
{
  if (isdigit(*argv[2]))
  {
    g = 1;
  }
}
}
if (argc == 3 )
{
  if (g == 1)
  {
    while (arg < argc - 1)
    {
        r = atof(argv[arg+1]);
        printf("%f\n", r);
        csize = carea(r);
        printf("Area of circle %d is %f\n", arg+1, csize);
        arg++;

    }
  }
  else
  {
  while (c != 2)
  {
        printf("Not a valid values or print next value.\n");
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &age) == 1)
    {
        if (c == 1)
        {
            c = 2;
            csize = carea(age);
            printf("Area of circle 2 is %f\n", csize);
        }
        else
        {
            c = 1;
            csize = carea(age);
            printf("Area of circle 1 is %f\n", csize);
        }
    }
  }
}
}
else
{
  while (c != 2)
  {
        printf("Not a valid values or print next value.\n");
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &age) == 1)
    {
        if (c == 1)
        {
            c = 2;
            csize = carea(age);
            printf("Area of circle 2 is %f\n", csize);
        }
        else
        {
            c = 1;
            csize = carea(age);
            printf("Area of circle 1 is %f\n", csize);
        }
    }
  }
}
}
