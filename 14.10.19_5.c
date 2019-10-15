#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float a[2][2], b[2];
	printf("Podaj wspolczynniki pierwszego rownania: ");
	scanf("%f %f %f", &a[0][0], &a[0][1], &b[0]);
	printf("Podaj wspolczynniki drugiego rownania: ");
	scanf("%f %f %f", &a[1][0], &a[1][1], &b[1]);
	
	float w = a[0][0]*a[1][1] - a[0][1]*a[1][0];
	float wx = b[0]*a[1][1] - a[0][1]*b[1];
	float wy = a[0][0]*b[1] - b[0]*a[1][0];
	
	if(w == 0){
		if(wx != 0 || wy != 0){
			printf("Brak rozwiazan");
		}
		else {
			printf("Uklad nieoznaczony lub brak rozwiazan");
		}
	} else {
		printf("X = %f, Y = %f", wx/w, wy/w);
	}
}
