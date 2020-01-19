#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>

typedef struct
{
	float min;
	int min_i;
	float max;
	int max_i;
} ekstrema;

ekstrema find(float tab[], int size)
{
	ekstrema out = {tab[0], 0, tab[0], 0};
	int i;
	
	for(i = 1; i < size; i++)
	{
		if(out.max < tab[i])
		{
			out.max = tab[i];
			out.max_i = i;
		}
		
		if(out.min > tab[i])
		{
			out.min = tab[i];
			out.min_i = i;
		}
	}
	
	return out;
}

float ciag(int a)
{
	if(a == 0)
	{
		return 3;
	}
	else if(a == 1)
	{
		return 2;
	}
	else
	{
		return cos(ciag(a - 1))+sin(ciag(a - 2));
	}
}



int main()
{
	system("rm wyniki.txt");
	
	int a, i;
	scanf("%d", &a);
	float tab[a];
	
	for(i = 0; i < a; i++)
	{
		tab[i] = ciag(i + 2);
	}
	
	ekstrema e = find(tab, a);
	
	printf("Max: %f z indeksem [%d]\n", e.max, e.max_i);
	printf("Min: %f z indeksem [%d]", e.min, e.min_i);
	
	FILE *f = fopen("wyniki.txt", "w");
	for(i = 0; i < a; i++)
	{
		fprintf(f, "%f\n", tab[i]);
	}
	fclose(f);
	
	system("wyniki.txt");
}
