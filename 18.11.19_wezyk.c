#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	
	int tab[n][m];
	
	for(j = 0; j < m; j++)
	{
		tab[0][j] = rand() % 100;
	}
	
	for(i = 1; i < n; i++)
	{
		for(j = 1; j < m; j++)
		{
			tab[i][j] = tab[i - 1][j - 1];
		}
		tab[i][0] = tab[i][m];
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}
}
