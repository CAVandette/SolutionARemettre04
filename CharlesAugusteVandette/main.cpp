// But : Pratiquer les fonctions � travers 3 exercices
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-30

#include <iostream>;
#include "prototypesDeFonction.h"

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // D�claration des variables
   int nbNotes;

   // D�claration et initialisation des constantes


   cout << "Veuillez entrer le nombre de notes : ";
   cin >> nbNotes;

   cout << "Veuillez enter les notes : ";
   cout << calculerMoyenne(nbNotes) << endl;

   system("pause");
   return 0;
}