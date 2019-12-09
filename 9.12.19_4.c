#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int FindMax(int tab[], int tabSize)
{
	int i, max = tab[0];
	for(i = 1; i < tabSize; i++)
	{
		if(max < tab[i])
		{
			max = tab[i];
		}
	}
	
	return max;
}

int main()
{
	int N;
	scanf("%d", &N);
	srand(time(0));
	int tab[N];
	
	int i = 0;
	for(i = 0; i < N; i++)
	{
		tab[i] = rand()%1000;
		printf("%d, ", tab[i]);
	}
	printf("\nMax: %d", FindMax(tab, N));
}
