#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	system("rm dane_rn.txt");
	FILE *output = fopen("dane_rn.txt", "w");
	srand(time(0));
	rand();
	int n = rand()%5051 + 50;
	
	printf("%d", 2*n);
	
	int i;
	for(i = 0; i < n; i++)
	{
		float x = (float)rand()/RAND_MAX;
		float y = (float)rand()/RAND_MAX;
		float z1 = sin(2*M_PI*y)*sqrt(-2*log(x));
		float z2 = cos(2*M_PI*y)*sqrt(-2*log(x));
		
		fprintf(output, "%f\n%f\n", z1, z2);
	}
	
	fclose(output);
	system("dane_rn.txt");
}
