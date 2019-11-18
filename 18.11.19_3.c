#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int tab[20], min, pos, i = 0;
	
	for(i; i < 20; i++)
	{
		scanf("%d", &tab[i]);
	}
	
	min = tab[0];
	pos = 0;
	
	for(i = 1; i < 20; i++)
	{
		if(min > tab[i])
		{
			min = tab[i];
			pos = i;
		}
	}
	
	printf("Min: %d, Pos: %d", min, pos);
}
