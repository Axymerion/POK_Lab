#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float x;
	printf("Podaj x: ");
	scanf("%f", &x);
	
	float z = sqrt(x + 2);
	float temp;
	if(temp = 3*x*x - 7*x + 2){
		z /= temp;
	}
	else{
		return -1;
	}
	
	printf("Wynik %f", z);
}
