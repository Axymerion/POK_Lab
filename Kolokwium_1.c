#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i, suma = 0, ilosc = 0;
	
	for(i = 0; i < 5; i++)
	{
		int a;
		scanf("%d", &a);
		if(a < 0)
		{
			break;
		}
		else if(a >= 5 && a <= 15)
		{
			suma += a;
			ilosc++;
		}
	}
	printf("Ilosc liczb: %d", i);
	if(ilosc != 0)
	{
		printf("\nSrednia: %f", (float)suma/ilosc);
	}
}
