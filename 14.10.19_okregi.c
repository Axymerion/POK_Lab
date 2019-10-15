//napisz program ktory wczyta srodki okregow i promienie. Okresl czy okregi sa rozlaczne, styczne zewnetrznie, przecinaja sie, styczne wewnetrznie lub rozlaczne wewnetrznie;

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct okrag{
	float x, y, promien;
};

int main(){
	
	struct okrag o1, o2;
	
	printf("Podaj wspolzedne i promien pierwszego okregu: ");
	scanf("%f %f %f", &o1.x, &o1.y, &o1.promien);
	printf("Podaj wspolzedne i promien drugiego okregu: ");
	scanf("%f %f %f", &o2.x, &o2.y, &o2.promien);
	
	float dist = sqrt(pow(o1.x - o2.x, 2) + pow(o1.y - o2.y, 2));
	
	if(dist > o1.promien + o2.promien){
		printf("Okregi zewnetrznie rozlaczne");
	}
	else if(dist == o1.promien + o2.promien){
		printf("Okregi zewnetrznie styczne");
	}
	else if(dist == fabs(o1.promien - o2.promien)){
		printf("Okregi wewnetrznie styczne");
	}
	else if(dist < fabs(o1.promien - o2.promien)){
		printf("Okregi wewnetrznie rozlaczne");
	}
	else {
		printf("Okregi przecinajace sie");
	}
}
