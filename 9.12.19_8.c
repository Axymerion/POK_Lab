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

float potega(float x, int y)
{
	if(y == 0)
	{
		return 1;
	}
	
	return potega(x, y - 1)*x;
}

float ex(float x, int N)
{
	int i;
	float suma = 0;
	for(i = 0; i <= N; i++)
	{
		suma += potega(x, i)/silnia(i);
	}
	
	return suma;
}

int main()
{
	int n;
	float x;
	scanf("%f %d", &x, &n);
	
	printf("%f\n\n", exp(x));
	
	int i;
	for(i = 1; i <= n; i++)
	{
		printf("%f\n", ex(x, i));
	}
}
