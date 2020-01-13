#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void sort(float tab[], int N)
{
	int i = 0, swaps = 1;
	while(swaps)
	{
		swaps = 0;
		for(i = 0; i < N - 1; i++)
		{
			if(tab[i] > tab[i+1])
			{
				float swap = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = swap;
				swaps++;
			}
		}
	}
}

void histogram(float tab[], int N, int p)
{
	int i, j;
	int slupek[p];
	for(i = 0; i < p; i++)
	{
		slupek[i] = 0;
	}
	sort(tab, N);
	
	float w = (tab[N - 1] - tab[0])/p;
	float eps = w/10;
	
	for(i = 0; i < p; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(tab[j] >= tab[0] + i*w - eps && tab[j] < tab[0] + (1+i)*w + eps)
			{
				slupek[i]++;
			}
		}
	}
}

int main()
{
	float tab[500] = {};
	int N, p, i;
	printf("Podaj ilosc liczb, ilosc przedzialow i liczby: ");
	scanf("%d %d", &N, &p);
	
	for(i = 0; i < N; i++)
	{
		scanf("%f", &tab[i]);
	}
	histogram(tab, N, p);
}
