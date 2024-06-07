// crudCpp.h : fichier Include pour les fichiers Include système standard,
// ou les fichiers Include spécifiques aux projets.

#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// TODO: Référencez ici les en-têtes supplémentaires nécessaires à votre programme.
//Classe représentant un objet (Ex: une personne)
class Personne
{
public:
	Personne(const std::string& nom, const std::string& prenom, int id);

	// Constructeur avec liste d'initialisation
	static void creerPersonne(std::vector<Personne>& personnes, const std::string& nom, const std::string& prenom, int id);
	
	static void lirePersonne(std::vector<Personne>& personnes);
	static void chercherParId(std::vector<Personne>& personnes, int id);
	static void mettreAjour(std::vector<Personne>& personnes, const std::string& nouvNom, const std::string& nouvPrenom, int id);
	static void supprimerPersonne(std::vector<Personne>& personne, int id);
	static void quitter();
	static void menu();
private:
	string nom;
	string prenom;
	int id;
};