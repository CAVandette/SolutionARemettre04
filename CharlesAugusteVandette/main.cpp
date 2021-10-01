// But : Pratiquer les fonctions à travers 3 exercices
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-30

#include <iostream>;
#include "prototypesDeFonction.h"   // Ici on nous permet d'utiliser nos fonctions

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int nbNotes;
   int jour;
   int mois;
   int annee;
   int hauteur;
   int largeur;
   char remplissage;

   // Déclaration et initialisation des constantes


   cout << "Veuillez entrer le nombre de notes : ";
   cin >> nbNotes;
   cout << "La moyenne est de : " << calculerMoyenne(nbNotes) << endl;
   // Ici, on appelle la fonction dans un affichage pour montrer le retour de la fonction


   system("pause");
   system("cls");


   cout << "Veuillez entrer le nombre du jour : ";
   cin >> jour;
   cout << "Veuillez entrer le nombre du mois : ";
   cin >> mois;
   cout << "Veuillez entrer l'année : ";
   cin >> annee;

   while (validerDate(jour, mois, annee) == 0)   // Cette boucle valide les données (0 = false, 1 = true)
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
   system("cls");


   // Ici, on s'assure que chaque donnée est bien positive avant de les envoyés à la fonction
   cout << "Veuillez entrer la hauteur du rectangle à dessiner : ";
   cin >> hauteur;
   while (!(hauteur >= 0))
   {
      system("cls");
      cout << "Erreur! Ce nombre doit être positif!" << endl;
      cout << "Veuillez entrer la hauteur du rectangle à dessiner : ";
      cin >> hauteur;
   }

   cout << "Veuillez entrer la largeur du rectangle à dessiner : ";
   cin >> largeur;
   while (!(largeur >= 0))
   {
      system("cls");
      cout << "Erreur! Ce nombre doit être positif!" << endl;
      cout << "Veuillez entrer la largeur du rectangle à dessiner : ";
      cin >> largeur;
   }

   cout << "Veuillez entrer le mode de remplissage du rectangle ([V]ide / [P]lein) : ";
   cin >> remplissage;
   while (remplissage != 'V' && remplissage != 'v' && remplissage != 'P' && remplissage !='p')
   {
      system("cls");
      cout << "Erreur! Veuillez entrer la lettre 'V' pour vide ou 'P' pour plein!" << endl;
      cout << "Veuillez entrer le mode de remplissage du rectangle ([V]ide / [P]lein) : ";
      cin >> remplissage;
   }

   afficherRectangle(hauteur, largeur, remplissage);

   system("pause");
   return 0;
}