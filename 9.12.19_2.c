#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float F(float x, float y)
{
	if(x < y)
	{
		return 2*x + 2*y;
	}
	
	if(x > y)
	{
		return x*x - sin(y);
	}
	
	return 3;
}

int main()
{
	int Np, Nk;
	float x, y, Dx, Dy;
	
	printf("Podaj Np, Nk, X0, Y0, DX i DY: ");
	scanf("%d %d %f %f %f %f", &Np, &Nk, &x, &y, &Dx, &Dy);
	
	int i = Np;
	float suma = 0;
	for(i; i <= Nk; i++)
	{
		suma += F(x + i*Dx, y - i*Dy);
	}
	printf("Suma: %f", suma);
}
