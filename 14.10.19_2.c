#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float a, b, x;
	printf("Podaj a i b: ");
	scanf("%f %f", &a, &b);
	
	if(a == 0){
		if(b != 0){
			printf("Funkcja y = %fx + %f nie ma miejsca zerowego", a, b);
			return 0;
		}
		else {
			printf("Funkcja y = %fx + %f ma nieskonczona ilosc miejsc zerowych", a, b);
			return 0;
		}
	}
	else {
		x = -b/a;
	}
	
	printf("Miejscem zerowym funkcji y = %fx + %f, jest x = %f", a, b, x);
	return 0;
}
