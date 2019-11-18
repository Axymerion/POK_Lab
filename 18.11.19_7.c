#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int tab[n][n];
	
	int i = 0, j;
	for(i; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &tab[i][j]);
		}
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for(j = 0; j < n; j++)
	{
		for(i = 0; i < n; i++)
		{
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}
}
