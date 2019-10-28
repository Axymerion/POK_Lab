#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x, suma = 0;
	int n;
	
	printf("podaj x i N: ");
	scanf("%f %d", &x, &n);
	
	if(n < -5) return 1;
	
	int i = -5;
	for(i; i <= n; i++){
		suma += pow(x, i)*sin(i*x);
	}
	
	printf("Suma: %f", suma);
}
