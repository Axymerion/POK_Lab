#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float* ZnajdzWierzcholek(float a, float b, float c)
{
	if(a == 0)
	{
		exit(1);
	}
	
	float out[2] = {-b/(2*a)};
	out[1] = a*out[0]*out[0] + b*out[0] + c;
	
	return out;
}

int main()
{
	float in[3];
	printf("Podaj wspolczynniki rownania kwadratowego: ");
	scanf("%f %f %f", &in[0], &in[1], &in[2]);
	float* out = ZnajdzWierzcholek(in[0], in[1], in[2]);
	printf("(%f, %f)", out[0], out[1]);
}
