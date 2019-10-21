#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int input, suma = 0, ilosc = 0, iloczyn = 1, pazyste = 0;
	
	do{
		printf("Podaj liczbe: ");
		scanf("%d", &input);
		if(input > 0){
			suma += input;
			ilosc++;
		}
		
		if((input < 5 || input > 10) && input > 0){
			iloczyn *= input;
		}
		
		if(input % 2 == 0 && input > 0){
			pazyste++;
		}
	}
	while(input >= 0);
	
	printf("Srednia: %f\n", (float)suma/ilosc);
	printf("Iloczyn: %d\n", iloczyn);
	printf("Liczb pazystych: %d", pazyste);
}
