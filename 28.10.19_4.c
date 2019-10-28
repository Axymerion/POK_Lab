#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double dziel(int x){
	if(x == 1) return 1;
	return dziel(x-1)/x;
}

int main(){
	int n, p = 1;
	double q, eps, y;
	
	printf("Podaj q, n i eps: ");
	scanf("%lf %d %lf", &q, &n, &eps);
	
	if(n < 1) exit(1);
	
	while(1)
	{
		y = dziel(p)*pow(n-q, p-1)*exp(n*q);
		if(y < eps)
		{
			printf("P: %d", p);
			return 0;
		}
		p++;
	}
	
}
