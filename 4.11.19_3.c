#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	double suma = 0, x;
	int n[2];
	printf("Podaj x, N1 i N2: ");
	scanf("%lf %d %d", &x, &n[0], &n[1]);
	
	int i = 1;
	for(i; i <= n[0]; i++)
	{
		double suma1 = 0;
		
		int j = -2;
		for(j; j <= i+3; j++)
		{
			suma1 += sin(j * x);
		}
		
		double suma2 = 0;
		int p = 1;
		for(p; p <= 10; p++)
		{
			double iloczyn = 1;
			int k = 1;
			for(k; k <= p + n[1]; k++)
			{
				iloczyn *= cos(k * (2 + p - x));
			}
			suma2 += iloczyn;
		}
		
		suma += suma1 + suma2;
	}
	
	printf("Wynik: %lf", suma);
}
