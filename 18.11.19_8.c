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
	
	int max = tab[0][0], wiersz = 0;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(tab[i][j] > max)
			{
				max = tab[i][j];
				wiersz = i;
			}
		}
	}
	
	printf("Max: %d, w wierszu %d", max, wiersz);
}
