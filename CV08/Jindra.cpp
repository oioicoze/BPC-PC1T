int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec) {
	double tempZacatekMensi = 0;
	double tempZacatekVetsi = 0;
	double tempKonecMensi = 0;
	double tempKonecVetsi = 0;
	double tempProhozeni = 0;

	//Serazeni zacatku a konce intervalu
	if (zacatek1 > konec1)
	{
		tempProhozeni = zacatek1;
		zacatek1 = konec1;
		konec1 = tempProhozeni;
	}
	if (zacatek2 > konec2)
	{
		tempProhozeni = zacatek2;
		zacatek2 = konec2;
		konec2 = tempProhozeni;
	}

	//Je/neni prunik
	if (zacatek2 < zacatek1)
	{
		tempZacatekMensi = zacatek2;
		tempZacatekVetsi = zacatek1;
	}
	else
	{
		tempZacatekMensi = zacatek1;
		tempZacatekVetsi = zacatek2;
	}
	if (konec2 < konec1)
	{
		tempKonecMensi = konec2;
		tempKonecVetsi = konec1;
	}
	else
	{
		tempKonecMensi = konec1;
		tempKonecVetsi = konec2;
	}

	if (tempZacatekMensi > tempKonecMensi or tempKonecMensi < tempZacatekVetsi)
	{
		return 0;
	}
	//hranicni body
	else
	{
		if (tempZacatekVetsi > tempZacatekMensi)
		{
			*vysl_zacatek = tempZacatekVetsi;
		}
		else
		{
			*vysl_zacatek = tempZacatekMensi;
		}

		if (tempKonecMensi < tempKonecVetsi)
		{
			*vysl_konec = tempKonecMensi;
		}
		else
		{
			*vysl_konec = tempKonecVetsi;
		}
	}
	return 1;
}