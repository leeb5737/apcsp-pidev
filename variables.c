#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int d;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a,b,c);
  d = a;
  a = c;
  c = d;
  printf("Swapped a(2) and c(5); a=%d, c=%d\n", a,c);

}
