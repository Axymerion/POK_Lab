#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float x;
	printf("Podaj x: ");
	scanf("%f", &x);
	
	float z = sqrt(x + 2);
	float y = 3*x*x - 7*x + 2;
	if(y != 0){
		z /= y;
	}
	else{
		return -1;
	}
	
	printf("Wynik %f", z);
}
