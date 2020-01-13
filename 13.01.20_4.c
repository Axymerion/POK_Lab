#include <stdlib.h>
#include <math.h>
#include <stdio.h>

typedef struct
{
	int v[50][50];
} matrix;

matrix mnoz(matrix a, matrix b, int n, int m)
{
	matrix out = {};
	int i, j, k;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			int suma = 0;
			for(k = 0; k < m; k++)
			{
				suma += a.v[i][k] * b.v[k][j];
			}
			out.v[i][j] = suma;
		}
	}
	return out;
}

int main()
{
	matrix a = {{{1, 2, 3}, {4, 5, 6}}};
	matrix b = {{{7, 8}, {9, 10}, {11, 12}}};
	matrix c = mnoz(a, b, 2, 3);
}
