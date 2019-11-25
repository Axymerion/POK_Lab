#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	struct wektor
	{
		float xp, yp, xk, yk, dlugosc;
	};
	
	struct wektor tab[20];
	printf("Podaj wspolrzedne poczatkow i koncow 20 wektorow: ");
	
	int i = 0;
	for(i; i < 20; i++)
	{
		scanf("%f %f", &tab[i].xp, &tab[i].yp);
		scanf("%f %f", &tab[i].xk, &tab[i].yk);
		tab[i].dlugosc = sqrt( pow( abs( tab[i].xp - tab[i].xk ), 2) + pow( abs( tab[i].yp - tab[i].yk ), 2));
	}
	
	int j = 0;
	float max = tab[0].dlugosc;
	for(i = 1; i < 20; i++)
	{
		if(max < tab[i].dlugosc)
		{
			max = tab[i].dlugosc;
			j = i;
		}
	}
	
	printf("Najdluzszy wektor ma poczatek (%f, %f) i dlugosc %f", tab[j].xp, tab[j].yp, tab[j].dlugosc);
}
