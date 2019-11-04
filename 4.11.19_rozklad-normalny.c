#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	double x, sigm, mi;
	
	printf("Podaj x, skale^2(sigma^2) i polozenie(my): ");
	scanf("%lf %lf %lf", &x, &sigm, &mi);
	
	if(sigm == 0)
	{
		printf("Bledne dane");
		exit(1);		
	}
	
	double y = pow(x - mi, 2)/(2 * sigm);
	y = exp(-y);
	y /= sqrt(sigm) * sqrt(2 * M_PI);
	
	printf("Gestosc prawdopodobienstwa: %lf\n", y);
	
	
	double z = (x - mi)/(sqrt(sigm) * sqrt(2));
	z = erf(z) + 1;
	z /= 2;
	
	printf("Dystrybuanta: %lf", z);
}
