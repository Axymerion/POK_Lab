#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	FILE *f;
	f = fopen("wynik.txt", "w");
	float xp, xk, delta, eps;
	printf("Podaj xp, xk i skok: ");
	scanf("%f %f %f", &xp, &xk, &delta);
	eps = delta/10;
	
	float i;
	for(i = xp; i <= xk + eps; i += delta)
	{
		fprintf(f, "%f\t%f\t%f\n", i, i*i, i*i*i);
	}
	fclose(f);
	printf("\nWyniki zapisane do pliku");
	
	system("wynik.txt");
}
