#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int tab[11] = {};
	
	int i = 0;
	for(i = 0; i < 1000; i++)
	{
		int y = rand() % 11 + 10;
		tab[y - 10] += 1;
	}
	
	for(i = 0; i < 11; i++)
	{
		printf("%d: %d razy\n", i+10, tab[i]);
	}
}
