#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	double x, suma = 0, eps, nMax;
	
	printf("Podaj x, eps i Nmax: ");
	scanf("%lf %lf %lf", &x, &eps, &nMax);
	
	if(x <= -1 || x >= 1)
	{
		printf("Bledne dane");
		exit(1);
	}
	
	int i = 0;
	double y;
	for(i; i <= nMax; i++)
	{
		y = pow(-1, i)*pow(x, i + 1);
		y /= i + 1;
		
		suma += y;
		if(fabs(y) < eps)
		{
			printf("Wynik: %lf", suma);
			exit(2);
		}
	}
	
	printf("Wynik: %lf\nDokladnosc: %lf", suma, fabs(y));
	exit(3);
}


/*
kody bledu:
1 - Bledne dane
2 - Osiagnieto zadana dokladnosc
3 - Osiagnieto Nmax
*/
