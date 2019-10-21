#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int i, n, ujemne = 0;
	float input, suma = 0, sumaDod = 0, sumaUje = 0;
	
	printf("Podaj N: ");
	scanf("%d", &n);
	
	if(n <= 0){
		printf("Bledne dane");
		return -1;
	}
	
	for(i = 0; i < n; i++){
		printf("Podaj liczbe %d: ", i+1);
		scanf("%f", &input);
		if(input < 0){
			sumaUje += input;
			ujemne++;
		} 
		else if(input > 0){
			sumaDod += input;
		}
		
		suma += input;
	}
	
	printf("Suma wszystkich: %f\n", suma);
	
	if(sumaDod){
		printf("Suma dodatnich: %f\n", sumaDod);
	}
	else{
		printf("Brak liczb dodatnich\n");
	}
	
	printf("Srednia wszystkich: %f\n", suma/n);
	
	if(ujemne){
		printf("Srednia ujemnych: %f\n", sumaUje/ujemne);
	}
	else{
		printf("Brak liczb ujemnych");
	}
}
