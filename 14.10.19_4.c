#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	printf("Podaj a, b i c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Nieskonczona ilosc rozwiazan");
			}
			else {
				printf("Brak miejsc zerowych");
			}
		}
		else {
			printf("Miejsce zerowe x = %f", -b/a);
		}
	}
	else {
		float delta = b*b - 4*a*c;
		if(delta > 0){
			float x[2];
			x[0] = (-b - sqrt(delta))/2*a;
			x[1] = (-b + sqrt(delta))/2*a;
			printf("Miejsca zerowe x1 = %f, x2 = %f", x[0], x[1]);
		}
		else if(delta == 0){
			printf("Miejsce zerowe x = %f", -b/2*a);
		}
		else {
			printf("Brak miejsc zerowych");
		}
	}
}
