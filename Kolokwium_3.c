#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	float tab[30][30];
} m;

void wczytaj(FILE *f, m *in, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		float a;
		fscanf(f, "%f", &a);
		
		in->tab[0][i] = in->tab[i][0] = a;
	}
	
}

void wypelnij(m *in, int size)
{
	int i, j;
	for(i = 1; i < size; i++)
	{
		for(j = 1; j < size; j++)
		{
			in->tab[i][j] = (in->tab[i - 1][j] + in->tab[i][j - 1])/2;
		}
	}
}

void wypisz(m in, int size)
{
	int i, j;
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("%f\t", in.tab[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	FILE *f = fopen("wyniki.txt", "r");
	
	int N = 0;
	float a;
	while(fscanf(f, "%f", &a) == 1)
	{
		N++;
	}
	
	m tablica;
	rewind(f);
	wczytaj(f, &tablica, N);
	wypelnij(&tablica, N);
	wypisz(tablica, N);
	
	fclose(f);
}
