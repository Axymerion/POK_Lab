#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float y[2], eps, l;
	
	printf("Podaj L i eps: ");
	scanf("%f %f", &l, &eps);
	
	if(l < 0) return 1;
	
	y[1] = l;
	
	do
	{
		y[0] = y[1];
		y[1] = 0.5*(y[0] + l/y[0]);
	}
	while(fabs(y[0] - y[1]) >= eps);
	
	
	printf("Wynik: %f", y[1]);
}
