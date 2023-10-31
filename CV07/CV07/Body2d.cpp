#include "Body2d.h"
#include <math.h>

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY) {
	int min = 100;
	int min_index = 100;
	
	for (int i = 0; i < velikost; i++)
	{
		double vzdalenost = sqrt(pow(poleBodu[i][0] - referencniX, 2) + pow(poleBodu[i][0] - referencniY, 2));
		if (vzdalenost < min)
		{
			min = vzdalenost;
			min_index = i;
		}
	}
	return min_index;
}

double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY) {
	int min = 100;
	int min_index = 100;
	double prumer = 0;
	

	for (int i = 0; i < velikost; i++)
	{
		prumer += sqrt(pow(poleBodu[i][0] - referencniX, 2) + pow(poleBodu[i][0] - referencniY, 2));
	}
	return prumer / velikost;
}