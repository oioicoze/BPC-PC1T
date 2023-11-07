// CV08.cpp : Defines the entry point for the application.
//

#include "CV08.h"
#include "Jindra.h"


int main()
{
	double zacatek1 = 0;
	double zacatek2 = 0;
	double konec1 = 0;
	double konec2 = 0;
	double vysl_zacatek = 0;
	double vysl_konec = 0;
	int vysledek = 0;

	printf("Zadej hodnotu zacatku prvniho intervalu: ");
	scanf_s("%lf", &zacatek1);
	printf("Zadej hodnotu konce prvniho intervalu: ");
	scanf_s("%lf", &zacatek2);
	printf("Zadej hodnotu zacatku druheho intervalu: ");
	scanf_s("%lf", &konec1);
	printf("Zadej hodnotu konce druheho intervalu: ");
	scanf_s("%lf", &konec2);

	vysledek = prunik(zacatek1, zacatek2, konec1, konec2, &vysl_zacatek, &vysl_konec);
	if (vysledek)
	{
		printf("Intervaly maji prunik a ma hodnoty %lf a %lf", vysl_zacatek, vysl_konec);
	}
	else
	{
		printf("Intervaly nemaji prunik.");
	}
	return 0;
}
