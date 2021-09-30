#include "prototypesDeFonction.h"
#include <iostream>
using namespace std;

int calculerMoyenne(int val1)
{
	float note;
	float resultat = 0;

	for (int i = 1; i <= val1; i++)
	{
		cin >> note;
		resultat = resultat + note;
	}

	resultat = resultat / val1;

   return resultat;
}
