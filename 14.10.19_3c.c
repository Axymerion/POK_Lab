#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float x;
	printf("Podaj x: ");
	scanf("%f", &x);
	
	if(x >= 1 && x <= 7){
		printf("Wynik: %f", pow(2*x + 0.25, 0.25));
	}
	else {
		printf("Wynik: %f", cos(exp(2*x)));
	}
}
