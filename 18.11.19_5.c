#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int tab[27] = {};
	char input[50];
	gets(input);
	
	
	int i = 0;
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
}
