#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	float xp, xk, deltx, eps;
	printf("Podaj xp, xk i deltx: ");
	scanf("%f %f %f", &xp, &xk, &deltx);
	
	if(xp >= xk || xp >= xk + deltx || deltx == 0){
		printf("Nieprawidlowe dane");
		return -1;
	}
	
	eps = deltx/10;
	
	do{
		printf("x: %f, x^2: %f, x^3: %f\n", xp, pow(xp, 2), pow(xp, 3));
		xp += deltx;
	}
	while(xp <= xk + eps);
}
