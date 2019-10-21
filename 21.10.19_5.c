#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float ciag(int i){
	if(i == -2){
		return 2;
	}
	else if(i == -1){
		return 1.5;
	}
	else if(i == 0){
		return 1;
	}
	
	float y = pow(ciag(i-2) + ciag(i-3), 0.5);
	y *= ciag(i-1);
	
	return y;
}

int main(){
	int i, n;
	printf("Podaj N: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		printf("%d wyraz ciagu: %f\n", i, ciag(i));
	}
}
