#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float x;
	printf("Podaj x: ");
	scanf("%f", &x);
	float y = (float)1/3 + sin(x/2);
	y *= pow(x, 3) + 3;
	if(y < 0){	
		printf("Wynik: %f", -pow(-y, (float)1/3));
	}
	else{
		printf("Wynik: %f", pow(y, (float)1/3));
	}
}
