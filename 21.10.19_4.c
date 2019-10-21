#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int i, np, nk, min, minUser, suma = 0, y;
	printf("Podaj np i nk: ");
	scanf("%d %d", &np, &nk);
	
	if(np < 1 || np > nk){
		printf("Bledne dane");
		return -1;
	}
	
	min = 50;
	
	for(i = 2; i <= np; i++){
		y = -pow(i, 2) + 15*i +50;
		if(y < min){
			min = y;
		}
	}
	
	minUser = -pow(np, 2) + 15*np + 50;
	for(i = np; i <= nk; i++){
		y = -pow(i, 2) + 15*i + 50;
		if(y < min){
			min = y;
		}
		
		if(y < minUser){
			minUser = y;
		}
		
		suma += y;
	}
	
	printf("Suma wyrazow od %d-go do %d-go: %d\n", np, nk, suma);
	printf("Najmniejsza z przedzialu [1 - %d]: %d\n", nk, min);
	printf("Najmniejsza z przedzialu [%d - %d]: %d", np, nk, minUser);
}
