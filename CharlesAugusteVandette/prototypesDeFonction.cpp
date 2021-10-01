// But : �crire les fonctions
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-30

#include "prototypesDeFonction.h"
#include <iostream>
using namespace std;
// Il est important d'ajouter chaque biblioth�que n�cessaire au bon fonctionnement de nos fonctions

int calculerMoyenne(int val1)
{
	float note;
	float resultat = 0;

	// On utilise la valeure de val1 pour connaitre le nombre de notes � entrer
	for (int i = 1; i <= val1; i++)
	{
		cout << "Veuillez enter la note " << i << " ==> ";
		cin >> note;
		resultat = resultat + note;
	}

	resultat = resultat / val1;

	// Retourner le r�sultat permet de l'utiliser dans le main de plusieurs fa�ons
   return resultat;
}

bool validerDate(int jour, int mois, int annee)
{
	bool validation = true;
	// Ici on initialise validation a true pour directement retourner cette valeure si les donn�es dont vrais
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

	if (choix == 'V' || choix == 'v')   // Permet de d�terminer si le rectangle doit �tre vide ou plein
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
