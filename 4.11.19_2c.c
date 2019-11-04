#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int inp, ilosc = 0, licznik = 0;
	
	int sekw[3] = {2, 1, 3};
	
	while(licznik != 3)
	{
		scanf("%d", &inp);
		
		if(inp == sekw[licznik])
		{
			licznik++;
		}
		
		if(licznik != 3){
			ilosc++;
		}
	}
	printf("Podano %d liczb", ilosc);
}
