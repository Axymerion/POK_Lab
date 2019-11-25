#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	FILE *f, *d1, *d2;
	f = fopen("dane.txt", "r");
	d1 = fopen("dane1.txt", "w");
	d2 = fopen("dane2.txt", "w");
	
	float y;
	while(fscanf(f, "%f", &y) == 1)
	{
		if(y > 0)
		{
			fprintf(d1, "%f\n", y);
		}
		else
		{
			fprintf(d2, "%f\n", y);
		}
	}
	
	fclose(f);
	fclose(d1);
	printf("\nLiczby wieksze od 0: ");
	system("dane1.txt");
	fclose(d2);
	printf("\nLiczby mnijesze od 0: ");
	system("dane2.txt");
}
