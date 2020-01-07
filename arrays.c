#include <stdio.h>

void arrayAdd(int* arr, int s, int n)
{
    for (int i = 0; i<s; i++)
        {
          *(arr+i) = *(arr+i) + n;
          printf("Value %d\n", arr[i]);

        }
}



int main()
{
  int arr[101];
    for (int i = 0; i<101; i++)
	{
	  arr[i] = i * i;

	}
    arrayAdd(arr, 5, 7);
}












