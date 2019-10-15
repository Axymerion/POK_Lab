#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float b, c, x;
	printf("Podaj b, c i x: ");
	scanf("%f %f %f", &b, &c, &x);
	printf("Wynik: %f", 2*pow(x, 4) + b*pow(x, 3) + c*pow(x, 2) + 8);
}
