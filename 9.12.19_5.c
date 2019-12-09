#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void PrintRN(char* inp)
{
	int i = strlen(inp) - 2;
	for(i; i >= 0; i--)
	{
		if(inp[i] >= 'a' && inp[i] <= 'z')
		{
			printf("%c", inp[i] - ('a' - 'A'));
		}
		else
		{
			printf("%c", inp[i]);
		}
	}
}

int main()
{
	FILE *f = fopen("daneText.txt", "r");
	
	char inp[255];
	while(!feof(f))
	{
		fgets(inp, 255, f);
		PrintRN(inp);
		printf("\n");
	}
	
}
