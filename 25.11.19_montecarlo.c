#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	srand(time(0));
	
	int in = 0, all = 0, i;
	printf("Ilosc prob: ");
	scanf("%d", &i);
	
	for(i; i > 0; i--)
	{
		float x = rand() / (RAND_MAX/2.0) - 1;
		float y = rand() / (RAND_MAX/2.0) - 1;
		
		if(sqrt(x*x + y*y) <= 1)
		{
			in++;
		}
		all++;
	}
	
	printf("Jednostki wewnatrz okregu: %d\nLacznie jednostek: %d\nPrzyblizona wartosc PI: %f", in, all, ((float)in/all)*4); //Dobre przyblizenie przy ponad 10.000.000 probek
}
