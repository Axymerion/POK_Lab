#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	
	float tab[n][m];
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(i == 0)
			{
				tab[i][j] = rand() % 11;
			}
			else if(j == 0)
			{
				tab[i][j] = rand() % 11;
			}
			else
			{
				tab[i][j] = tab[i - 1][j] + tab[i][j - 1];
				tab[i][j] /= 2;
			}
		}
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("%.2f ", tab[i][j]);
		}
		printf("\n");\
	}
}
