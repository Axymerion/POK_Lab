#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potega(float x, int y)
{
	if(y == 0)
	{
		return 1;
	}
	
	return potega(x, y - 1)*x;
}

int main()
{
	printf("%f", potega(2, 10));
}
