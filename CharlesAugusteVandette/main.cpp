// But : Pratiquer les fonctions à travers 3 exercices
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-30

#include <iostream>;
#include "prototypesDeFonction.h"

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int nbNotes;
   int jour;
   int mois;
   int annee;

   // Déclaration et initialisation des constantes


   cout << "Veuillez entrer le nombre de notes : ";
   cin >> nbNotes;
   cout << calculerMoyenne(nbNotes) << endl;


   system("pause");
   system("cls");


   cout << "Veuillez entrer le nombre du jour : ";
   cin >> jour;
   cout << "Veuillez entrer le nombre du mois : ";
   cin >> mois;
   cout << "Veuillez entrer l'année : ";
   cin >> annee;

   while (validerDate(jour, mois, annee) == 0)
   {
      system("cls");
      cout << "Erreur!" << endl;
      cout << "Veuillez entrer le nombre du jour : ";
      cin >> jour;
      cout << "Veuillez entrer le nombre du mois : ";
      cin >> mois;
      cout << "Veuillez entrer l'année : ";
      cin >> annee;
   }
   cout << "Félicitation! c'est une date valide! (" << jour << "-" << mois << "-" << annee << ")" << endl;


   system("pause");
   return 0;
}