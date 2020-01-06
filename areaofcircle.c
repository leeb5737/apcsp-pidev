#include <stdio.h>


float carea(int i)
{
  float a;
  a = i*i*3.14;
  return a;
}

int main()
{
float g;
  for (float i = 3.5; i < 13.5; i++ )
  {
	  g = carea(i);
	  printf("Area of radius %f is %f\n", i, g);
  }
}
