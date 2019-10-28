//liczba eulera suma 1/n!

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Siln(int x)
{
	if(x == 1) return 1;
	return Siln(x - 1)/x;
}

int main()
{
	double eps, suma = 1;
	
	printf("Podaj eps: ");
	scanf("%lf", &eps);
	
	int i = 1;
	do
	{
		suma += Siln(i);
		i++;
	}
	while(fabs(suma - exp(1)) >= eps);
	
	printf("%.10f", suma);
}
