#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	char input[50], output[50];
	gets(input);
	
	int i = 0, j = 0;
	
	int y = 0;
	while(input[i] != '\0')
	{
		if(input[i] != ' ')
		{
			output[y] = input[i];
			y++;
		}
		i++;
	}
	
	printf("%s", output);
}
