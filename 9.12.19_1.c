#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float W(float a1, float a2, float b1, float b2)
{
	return (a1 * b2) - (a2 * b1);
}

int main()
{
	float tab[2][3];
	printf("Podaj wspolczynniki pierwszego rownania: ");
	scanf("%f %f %f", &tab[0][0], &tab[0][1], &tab[0][2]);
	printf("Podaj wspolczynniki drugiego rownania: ");
	scanf("%f %f %f", &tab[1][0], &tab[1][1], &tab[1][2]);
	
	
	
	if(W(tab[0][0], tab[0][1], tab[1][0], tab[1][1]) == 0)
	{
		printf("Uklad rownan \n%f*X + %f*Y = %f\n%f*X + %f*Y = %f\nJest sprzeczny lub nioznaczony", tab[0][0], tab[0][1], tab[0][2], tab[1][0], tab[1][1], tab[1][2]);
	}
	else
	{
		printf("Rozwiazaniem ukladu rownan\n");
		printf("%f*X + %f*Y = %f\n", tab[0][0], tab[0][1], tab[0][2]);
		printf("%f*X + %f*Y = %f\n", tab[1][0], tab[1][1], tab[1][2]);
		printf("Jest X = %f", W(tab[0][2], tab[0][1], tab[1][2], tab[1][1])/W(tab[0][0], tab[0][1], tab[1][0], tab[1][1]));
		printf(" i Y = %f", W(tab[0][0], tab[0][2], tab[1][0], tab[1][2])/W(tab[0][0], tab[0][1], tab[1][0], tab[1][1]));

	}
}
