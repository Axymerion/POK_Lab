#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float x;
	printf("Podaj x: ");
	scanf("%f", &x);
	
	if(x <= -5){
		printf("Wynik: %f", 2*x + (float)10/3);
	} 
	else if(x >= 7){
		if(sin(2*x) + x*x < 0){
			printf("Wynik: %f", -pow(-(sin(2*x) + x*x), (float)1/3));
		}
		else {
			printf("Wynik %f", pow(sin(2*x) + x*x), float(1/3));	
		}
	}
	else {
		printf("Wynik: %f", sqrt(fabs(x)) + exp(x/2 + 1));
	}
}
