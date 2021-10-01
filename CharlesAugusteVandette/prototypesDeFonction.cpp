// But : Écrire les fonctions
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-30

#include "prototypesDeFonction.h"
#include <iostream>
using namespace std;
// Il est important d'ajouter chaque bibliothèque nécessaire au bon fonctionnement de nos fonctions

int calculerMoyenne(int val1)
{
	float note;
	float resultat = 0;

	// On utilise la valeure de val1 pour connaitre le nombre de notes à entrer
	for (int i = 1; i <= val1; i++)
	{
		cout << "Veuillez enter la note " << i << " ==> ";
		cin >> note;
		resultat = resultat + note;
	}

	resultat = resultat / val1;

	// Retourner le résultat permet de l'utiliser dans le main de plusieurs façons
   return resultat;
}

bool validerDate(int jour, int mois, int annee)
{
	bool validation = true;
	// Ici on initialise validation a true pour directement retourner cette valeure si les données dont vrais
	if (!(jour > 0 && jour < 32 && mois > 0 && mois < 13))
	{
		// On change la validation dans le cas contraire
		validation = false;
	}
	return validation;
}

void afficherRectangle(int hauteur, int largeur, char choix)
{
	const char CONTENU_P = '*';
	const char CONTENU_V = ' ';
	const char CONTOUR = '#';

	if (choix == 'V' || choix == 'v')   // Permet de déterminer si le rectangle doit être vide ou plein
	{
		for (int ligne = 1; ligne <= hauteur; ligne++)
		{
			for (int etoile = 1; etoile <= largeur; etoile++)
			{
				if (ligne == 1 || ligne == hauteur || etoile == 1 || etoile == largeur)
				{
					cout << CONTOUR;
				}
				else
				{
					cout << CONTENU_V;
				}
			}
			cout << endl;
		}
	}
	else
	{
		for (int ligne = 1; ligne <= hauteur; ligne++)
		{
			for (int etoile = 1; etoile <= largeur; etoile++)
			{
				if (ligne == 1 || ligne == hauteur || etoile == 1 || etoile == largeur)
				{
					cout << CONTOUR;
				}
				else
				{
					cout << CONTENU_P;
				}
			}
			cout << endl;
		}
	}
}
