#include "prototypesDeFonction.h"
#include <iostream>
using namespace std;

int calculerMoyenne(int val1)
{
	float note;
	float resultat = 0;

	for (int i = 1; i <= val1; i++)
	{
		cout << "Veuillez enter la note : " << i << endl;
		cout << "==> ";
		cin >> note;
		resultat = resultat + note;
	}

	resultat = resultat / val1;

   return resultat;
}

bool validerDate(int jour, int mois, int annee)
{
	bool validation = true;
	if (!(jour > 0 && jour < 32 && mois > 0 && mois < 13))
	{
		validation = false;
	}
	return validation;
}
