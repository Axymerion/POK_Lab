#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	system("rm dane.txt");
	srand(time(0));
	FILE *f;
	f = fopen("dane.txt", "w");
	
	int n;
	float a;
	printf("Podaj a i n: ");
	scanf("%f %d", &a, &n);
	
	for(n; n > 0; n--)
	{
		float y = ( rand() / ( (float)RAND_MAX/2 ) - 1) * a;
		fprintf(f, "%f\n", y);
	}
	fclose(f);
	printf("Dane zapisane do pliku");
	system("dane.txt");
}
