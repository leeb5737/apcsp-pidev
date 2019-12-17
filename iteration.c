#include <stdio.h>

int main()
{
  for (int i = 0; i < 100; i++ )
	if ( i%3 == 0)
	{
	  printf("%d is divisible by 3\n", i);
	}
	else
	{
	  printf("%d is not divisible by 3\n", i);
	}
}
