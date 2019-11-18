#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	
	int tab[n];
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &tab[i]);
	}
	
	for(i = 0; i < n/2; i++)
	{
		tab[i] += tab[n - i - 1];
		tab[n - i - 1] = tab[i] - tab[n - i - 1];
		tab[i] = tab[i] - tab[n - i - 1];
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d, ", tab[i]);
	}
}
