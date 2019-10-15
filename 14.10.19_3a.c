#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float x;
	printf("Podaj x: ");
	scanf("%f", &x);
	
	if(x < 0){
		printf("Wynik: %f", sqrt(fabs(2 + x)));
	}	
	else if(x == 0){
		printf("Wynik: 2");
	}
	else {
		printf("Wynik: %f", x*x + exp(2*x));
	}
}
