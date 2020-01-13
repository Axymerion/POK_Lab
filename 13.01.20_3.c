#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int toInt(char in[], int base)
{
	int i, out = 0, p = 0;
	for(i = strlen(in) - 1; i >= 0; i--)
	{
		if(in[i] >= '0' && in[i] <= '9')
		{
			out += (in[i]-'0')*pow(base, p);
		}
		else
		{
			out += (in[i]-'A'+10)*pow(base, p);
		}
		p++;
	}
	return out;
}

int main()
{
	printf("Podaj podstawe i liczbe: ");
	int a;
	char t[50];
	scanf("%d %s", &a, &t);
	printf("\n%d", toInt(t, a));
}
