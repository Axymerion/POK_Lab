#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	system("rm raport.txt");
	system("rm ndane_rn.txt");
	
	FILE *out = fopen("raport.txt", "w");
	FILE *in = fopen("dane_rn.txt", "r");
	FILE *nout = fopen("ndane_rn.txt", "w");
	
	float x;
	int n = 0;
	float suma = 0;
	while(fscanf(in, "%f", &x) > 0)
	{
		n++;
		suma+=x;
	}
	
	fclose(in);
	in = fopen("dane_rn.txt", "r");
	
	int i;
	float suma2 = 0;
	for(i = 0; i < n; i++)
	{
		fscanf(in, "%f", &x);
		suma2 += pow((float)suma/n - x, 2);
	}
	suma2 /= n - 1;
	suma2 = sqrt(suma2);
	
	int przedzialy[3] = {};
	
	fclose(in);
	in = fopen("dane_rn.txt", "r");
	
	for(i = 0; i < n; i++)
	{
		fscanf(in, "%f", &x);
		if(x >= (float)suma/n - suma2 && x <= (float)suma/n + suma2)
		{
			przedzialy[0]++;
			fprintf(nout, "%f\n", x);
		}
		
		if(x >= (float)suma/n - 2*suma2 && x <= (float)suma/n + 2*suma2)
		{
			przedzialy[1]++;
		}
		
		if(x >= (float)suma/n - 3*suma2 && x <= (float)suma/n + 3*suma2)
		{
			przedzialy[2]++;
		}
	}
	
	fprintf(out, "Ilosc liczb: %d\nSrednia: %f\nOdchylenie: %f\n", n, (float)suma/n, suma2);
	fprintf(out, "Ilosc liczb w przedziale [%f, %f]: %d\n", (float)suma/n - suma2, (float)suma/n + suma2, przedzialy[0]);
	fprintf(out, "Ilosc liczb w przedziale [%f, %f]: %d\n", (float)suma/n - 2*suma2, (float)suma/n + 2*suma2, przedzialy[1]);
	fprintf(out, "Ilosc liczb w przedziale [%f, %f]: %d\n", (float)suma/n - 3*suma2, (float)suma/n + 3*suma2, przedzialy[2]);
	fclose(in);
	fclose(out);
	fclose(nout);
	system("raport.txt");
	system("ndane_rn.txt");
	
}
