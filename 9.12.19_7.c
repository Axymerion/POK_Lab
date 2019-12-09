#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long silnia(int n)
{
	if(n == 0)
	{
		return 1;
	}
	
	return silnia(n - 1)*n;
}

int main()
{
	printf("%llu", silnia(15));	
}
