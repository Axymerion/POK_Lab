#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	srand(time(0));
	
	int in = 0, out = 0, i;
	scanf("%d", &i);
	
	for(i; i >= 0; i--)
	{
		float x = rand() / (RAND_MAX/2.0) - 1;
		float y = rand() / (RAND_MAX/2.0) - 1;
		
		if(sqrt(x*x + y*y) <= 1)
		{
			in++;
		}
		out++;
	}
	
	printf("in: %d, out: %d, pi: %f", in, out, ((float)in/out)*4); //Dobre przyblizenie przy ponad 10.000.000 probek
}
