#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	system("rm wynik_hex.txt");
	
	FILE *f, *w;
	f = fopen("dane_hex.txt", "r");
	w = fopen("wynik_hex.txt", "w");
	
	char hex[50];
	while(fscanf(f, "%s", hex) == 1)
	{
		int i, y = 0, j = 0;
		for(i = strlen(hex) - 1; i >= 0; i--)
		{
			if(hex[i] < 'A'){
				y += pow(16, j) * (hex[i] - '0');
			}
			else
			{
				y += pow(16, j) * (hex[i] - 'A' + 10);
			}
			j++;
		}
		fprintf(w, "%s = %d\n", hex, y);
	}
	
	fclose(f);
	fclose(w);
	printf("Dane zapisane do pliku");
	system("wynik_hex.txt");
}
