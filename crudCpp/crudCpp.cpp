#include "crudCpp.h"


using namespace std;

// Constructeur avec liste d'initialisation
Personne::Personne(const std::string& nom, const std::string& prenom, int id) :
	nom(nom), prenom(prenom), id(id) {}


void Personne::creerPersonne(std::vector<Personne>& personnes, const std::string& nom,
	const std::string& prenom, int id)
{
	personnes.push_back(Personne(nom, prenom, id));
	cout << "\n";
	cout << "Personne cree: " << nom <<" "<<prenom<<" "<< id << endl;
	cout << "\n";
}


void Personne::lirePersonne(std::vector<Personne>& personnes)
{
	for (const auto& personne : personnes)
	{
		cout << "\n";
		cout << "Nom: " << personne.nom << endl;	
		cout << "Prenom: " << personne.prenom << endl;
		cout<<"Id: "<< personne.id <<endl;
	}
	cout << "\n";
}

void Personne::chercherParId(std::vector<Personne>& personnes, int id)
{
	auto it = std::find_if(personnes.begin(), personnes.end(), [id](const Personne& user) 
		{ 
			return user.id == id; 
		});
    if (it != personnes.end())
	{
		cout << "\n";
		cout << "Trouvé: ID: " << it->id << ", Nom: " << it->nom << ", Prenom: " << it->prenom << std::endl;
    }
	else
	{
		cout << "\n";
		cout << "Personne avec ID " << id << " non trouvee." << std::endl;
	}
}


void Personne::mettreAjour(std::vector<Personne>& personnes, const std::string& nouvNom,
	const std::string& nouvPrenom, int id)
{
	auto it = std::find_if(personnes.begin(), personnes.end(), [id](const Personne& p) { return p.id == id; });
	if (it != personnes.end())
	{
		it->nom = nouvNom;
		it->prenom = nouvPrenom;
		cout << "\n";
		std::cout << "Personne mise a jour." << std::endl;
	}
	else
	{
		std::cout << "Personne avec ID " << id << " non trouvee." << std::endl;
	}
}

void Personne::supprimerPersonne(std::vector<Personne>& personnes, int id)
{
	auto it =remove_if(personnes.begin(), personnes.end(), [id](const Personne& p) 
		{ 
			return p.id == id; 
		});
	if (it != personnes.end())
	{
		personnes.erase(it, personnes.end());
		cout << "\n";
		std::cout << "Personne supprimee." << std::endl;
	}
	else
	{
		cout << "\n";
		std::cout << "Personne avec ID " << id << " non trouvée." << std::endl;
	}
}

void Personne::quitter()
{
	cout << "\n";
	cout << " Vous avez choisi de quitter le programme. Au revoir !!!" << std::endl;
	
	exit(0);
}

void Personne::menu()
{

	cout << "\nMenu:\n";
	cout << "1. Creer un utilisateur\n";
	cout << "2. Lire les utilisateurs\n";
	cout << "3. Mettre a jour un utilisateur\n";
	cout << "4. Supprimer un utilisateur\n";
	cout << "5. Quitter\n";
	cout << "\n";
	cout << "Entrez votre choix: "; 
	
	

	



}


