// CV07.cpp : Defines the entry point for the application.
//

#include "CV07.h"
#include "Body2d.h"
#define POCET_BODU 10
#include "Body2d.h"



int main()
{
	int x = 0;
	int y = 0;
	int body[POCET_BODU][2] = 
	{ 5, 10,
	-14, 2,
	45, 4,
	-9, 8,
	58, -3,
	47, 5,
	-18, -86,
	75, 7,
	-25, 51,
	17, 98 };

	printf("zadej hodnotu prvni souradnice: ");
	scanf("%d", &x);
	printf("zadej hodnotu prvni souradnice: ");
	scanf("%d", &y);
	int index = indexNejblizsi(POCET_BODU, body, x, y);
	printf("je to: %d\n", index);

	int index2 = prumernaVzdalenost(POCET_BODU, body, x, y);
	printf("je to: %d", index2);

	return 0;


}
