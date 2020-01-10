#include "student.h"
#include <stdio.h>
void printStudent(struct Info* student)
{
  printf("First Name: %s, Last Name: %s, Age: %d, ID: %d\n", student->first, student->last,student->age, student->id);
}
