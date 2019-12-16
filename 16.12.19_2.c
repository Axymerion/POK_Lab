#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float Wielomian(float wspolczynniki[], int stopien, float x)
{
	if(stopien == 0)
	{
		return wspolczynniki[0];
	}
	
	float wsp[stopien];
	int i;
	for(i = 0; i < stopien; i++)
	{
		wsp[i] = wspolczynniki[i];
	}
	float a;
	return a = Wielomian(wsp, stopien-1, x)*x + wspolczynniki[stopien];
}

int main()
{
	int N;
	
	printf("Podaj stopien: ");
	scanf("%d", &N);
	
	float a[N+1], x;
	
	printf("Podaj %d wspolczynnikow: ", N+1);
	
	int i; 
	for(i = 0; i <= N; i++)
	{
		scanf("%f", &a[i]);
	}
	
	printf("Podaj x: ");
	scanf("%f", &x);
	
	printf("\n Wynik: %f", Wielomian(a, N, x));
}
