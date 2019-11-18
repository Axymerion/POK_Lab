#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	
	int tab[n][m];
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &tab[i][j]);
		}
	}
	
	for(i = 0; i < n; i++)
	{
		int suma = 0;
		for(j = 0; j < m; j++)
		{
			suma += tab[i][j];
		}
		printf("Suma wiersza %d: %d\n", i, suma);
	}
}
