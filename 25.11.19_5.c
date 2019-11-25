#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	FILE *f, *w;
	f = fopen("dane_bin.txt", "r");
	w = fopen("wynik_bin.txt", "w");
	
	char bin[50];
	while(fscanf(f, "%s", bin) == 1)
	{
		int i, y = 0, j = 0;
		for(i = strlen(bin) - 1; i >= 0; i--)
		{
			y += pow(2, j) * (bin[i] - '0');
			j++;
		}
		fprintf(w, "%d\n", y);
	}
	
	fclose(f);
	fclose(w);
	printf("Dane zapisane do pliku");
	system("wynik_bin.txt");
}
