#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	struct punkt
	{
		float x;
		float y;
	};
	
	struct okrag
	{
		struct punkt srodek;
		float promien;
	};
	
	struct kwadrat
	{
		struct punkt wierzcholek1;
		struct punkt wierzcholek2;
	};
	
	
	printf("Podaj wspolrzedne dwoch punktow (x, y)): ");
	struct punkt p1, p2;
	scanf("%f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y);
	
	printf("\nOdleglosc punktow: %f", sqrt( pow( abs(p1.x - p2.x), 2) + pow( abs(p1.y - p2.y), 2) ) );
	
	
	printf("\nPodaj wspolrzedne srodka kola i promien: ");
	struct okrag o;
	scanf("%f %f %f", &o.srodek.x, &o.srodek.y, &o.promien);
	
	printf("\nPole kola: %f", pow(o.promien, 2) * M_PI);
	
	
	printf("\nPodaj wspolrzende wierzcholkow kwadratu: ");
	struct kwadrat k;
	scanf("%f %f %f %f", &k.wierzcholek1.x, &k.wierzcholek1.y, &k.wierzcholek2.x, &k.wierzcholek2.y);
	
	float a = sqrt( pow( abs(k.wierzcholek1.x - k.wierzcholek2.x), 2) + pow( abs(k.wierzcholek1.y - k.wierzcholek2.y), 2));
	a /= sqrt(2);
	printf("\nPole kwadratu: %f", a*a);
}
