#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int n, typ[3] = {};
	scanf("%d", &n);
	
	int tab[n][n];
	
	int i = 0, j = 0;
	for(i; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &tab[i][j]);
		}
	}
	
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i < j && tab[i][j] != 0)
			{
				typ[2] = 1;
			}
			
			if(i != j && tab[i][j] != 0)
			{
				typ[1] = 1;
			}
			
			if(tab[i][j] != tab[j][i])
			{
				typ[0] = 1;
			}
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		printf("Typ 1:");
		if(typ[i])
		{
			printf("Nie\n");
		}
		else
		{
			printf("Tak\n");
		}
	}
}
