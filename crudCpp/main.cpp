// crudCpp.cpp : définit le point d'entrée de l'application.
//
#include <iostream>
#include <vector>
#include "crudCpp.h"



int main()
{
	std::vector<Personne> personnes;
	string nom, prenom;
	int choix, id;

    
    Personne::menu();
    cin >> choix;

    do {
        switch (choix) {
        case 1:
            cout << "\n";
            cout << "Entrez le nom de l'utilisateur: ";
            cin >> nom;
            cout << "Entrez le prenom de l'utilisateur: ";
            cin >> prenom;
            cout << "Entrez l'ID de l'utilisateur: ";
            cin >> id;
            Personne::creerPersonne(personnes, nom, prenom, id);
            break;
        case 2:
            Personne::lirePersonne(personnes);
            break;
        case 3:
            cout << "\n";
            cout << "Entrez l'ID de l'utilisateur a mettre a jour: ";
            cin >> id;
            cout << "Entrez le nouveau nom de l'utilisateur: ";
            cin >> nom;
            cout << "Entrez le nouveau prenom de l'utilisateur: ";
            cin >> prenom;
            Personne::mettreAjour(personnes, nom, prenom, id);
            break;
        case 4:
            cout << "\n";
            cout << "Entrez l'ID de l'utilisateur a supprimer: ";
            cin >> id;
            Personne::supprimerPersonne(personnes, id);
            break;
        case 5:
            cout << "\n";
            Personne::quitter();
            break;
        default:
            cout<<"Choix invalide, veuillez reessayer."<<endl;
            break; 
        }
        std::cout << "Une autre operation? (choix entre 1-5): ";
        cin >> choix;
   
    } while (choix != 5);

	return 0;
}
