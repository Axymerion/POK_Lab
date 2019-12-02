#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	FILE *in = fopen("dane_rn.txt", "r");
	int n = 1;
	float max, min;
	fscanf(in, "%f", &max);
	min = max;
	
	float x ;
	while(fscanf(in, "%f", &x) > 0)
	{
		if(x < min) min = x;
		if(x > max) max = x;
		n++;
	}
	fclose(in);
	
	int N;
	printf("Min: %f\nMax: %f\nIlosc liczb: %d\n", min, max, n);
	printf("Podaj ilosc przedzialow: ");
	scanf("%d", &N);
	
	float delt = fabs(min) + fabs(max);
	delt /= N;
	
	int licz[N];
	
	int i, j;
	for(i = 0; i < N; i++)
	{
		in = fopen("dane_rn.txt", "r");
		licz[i] = 0;
		for(j = 0; j < n; j++)
		{
			fscanf(in, "%f", &x);
			if(x >= min && x < min + delt)
			{
				licz[i]++;
			}
		}
		fclose(in);
		min += delt;
	}
	
	max = 0;
	for(i = 0; i < N; i++)
	{
		if(licz[i] > max)
		{
			max = licz[i];
		}
	}
	
	int temp = max;
	for(i = 0; i < max; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(licz[j] >= temp)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		temp--;
		printf("\n");
	}
}
