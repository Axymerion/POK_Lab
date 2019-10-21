#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int a, b, i;
	scanf("%d", &i);
	a = 1;
	b = 0;
	for(i; i>0; i--){
		b = a+b;
		a = b-a;
	}
	printf("%d", b);
}

