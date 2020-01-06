#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  float d = 6;
  float e = 5;
  float f;
  float* ptrtod;
  float* ptrtoe;
  ptrtod = &d;
  ptrtoe = &e;
  a = 5;
  printf("The value of d is %f\n", d);
  printf("The value of ptrtod is %d\n", ptrtod);
  printf("The value of e is %f\n", e);
  printf("The value of ptrtoe is %d\n", ptrtoe);
  f = d;
  d = e;
  e = f;
  printf("Switched values of d (%f) and e (%f)\n", d, e);

}
