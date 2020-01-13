#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int parse(char in[])
{
	int i, out = 0, p = 0;
	for(i = strlen(in) - 1; i >= 0; i--)
	{
		out += (in[i]-'0')*pow(10, p);
		p++;
 	}
 	return out;
}

int main()
{
	char tab[] = "1234";
	printf("%d", parse(tab));
}
