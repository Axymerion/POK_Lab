#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct
{
	float v[20][20];
} Macierz;

Macierz T(Macierz tab, int w)
{
	int i, j;
	Macierz out;
	
	for(i = 0; i < w; i++)
	{
		for(j = 0; j < w; j++)
		{
			out.v[i][j] = tab.v[j][i];
		}
	}
	return out;
}

int main()
{	
	Macierz in;
	in.v[0][0] = 1;
	in.v[0][1] = 2;
	in.v[1][0] = 3;
	in.v[1][1] = 4;
	
	Macierz out = T(in, 2);
	printf("%f", out.v[1][0]);
	return 0;
}
