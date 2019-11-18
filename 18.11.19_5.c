#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int tab[27] = {};
	char input[50];
	gets(input);
	
	
	int i = 0, j;
	while(input[i])
	{
		if(input[i] >= 'a' && input[i] <= 'z')
		{
			tab[input[i] - 'a']++;
		}
		else
		{
			tab[26]++;
		}
		i++;
	}
	
	for(i = 97; i < 123; i++)
	{
		if(tab[i - 'a'])
		{
			printf("Znak %c wystapil %d razy\n", i, tab[i - 'a']);
		}
	}	
	
	if(tab[26])
	{
		printf("Niezidentyfikowane znaki: %d", tab[26]);
	}
	
	//Od tego momentu jest zadanie dodatkowe z dedykacja dla mnie xD
	
	printf("\n\n");
	
	int max = 0;
	
	for(i = 0; i < 27; i++)
	{
		if(max < tab[i])
		{
			max = tab[i];
		}
	}
	
	int temp = max;
	for(i = 0; i < max; i++)
	{
		for(j = 0; j < 27; j++)
		{
			if(tab[j] < temp)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
		temp--;
	}
	
	for(i = 97; i < 123; i++)
	{
		printf("%c", i);
	}
	printf("?");
}
