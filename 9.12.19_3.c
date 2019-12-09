#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void PrintRange(float a, float b, float delta)
{
	float i, eps = delta/10;
	for(i = a; i < b + eps; i += delta)
	{
		printf("%f\n", i);
	}
}

int main()
{
	PrintRange(1, 5, (float)1/3);
}
