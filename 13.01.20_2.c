#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
	char s[50];
} string;

string toBin(int in)
{
	string out;
	int pointer = 0;
	
	while(in > 0)
	{
		out.s[pointer] = in%2 + '0';
		in/=2;
		pointer++;
	}
	
	out.s[pointer + 1] = '\0';
	return out;
}

int main()
{
	int p = 0;
	string o = toBin(125);
	puts(strrev(o.s));
}
