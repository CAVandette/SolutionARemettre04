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

   // Déclaration et initialisation des constantes


   cout << "Veuillez entrer le nombre de notes : ";
   cin >> nbNotes;

   cout << "Veuillez enter les notes : ";
   cout << calculerMoyenne(nbNotes) << endl;

   system("pause");
   return 0;
}