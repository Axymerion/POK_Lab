#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, dX, suma = 0, ilosc = 0, max, eps;
	printf("Podaj a, b i dX: ");
	scanf("%f %f %f", &a, &b, &dX);
	
	eps = dX/10;
	
	if(a > b) return 1;
	
	float x = a;
	
	if(x < 0)
	{
		max = x*x*x + 1/x;
	}
	else if(x > 0)
	{
		max = cbrt(sin(sqrt(x)));
	}
	else
	{
		max = 3*sqrt(2);
	}
	
	suma += max;
	ilosc++;
	
	for(x = a + dX; x < b + eps; x += dX)
	{
		float y;
		
		if(x < 0 - eps)
		{
			y = x*x*x + 1/x;
		}
		else if(x > 0 + eps)
		{
			y = cbrt(sin(sqrt(x)));
		}
		else
		{
			y = 3*sqrt(2);
		}
		
		if(y > max)
		{
			max = y;
		}
		
		suma += y;
		ilosc++;
	}


	printf("Srednia: %f, max: %f", suma/ilosc, max);
}
