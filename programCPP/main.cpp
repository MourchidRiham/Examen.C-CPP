#include <iostream>
#include <string>

using namespace std;

class Store {
public:
    virtual void afficherDetails() = 0;
};

class Fleur : public Store {
private:
    string nom;
    string origine;
    string description;
    string consigne;

public:
    Fleur(string n, string o, string d, string c) : nom(n), origine(o), description(d), consigne(c) {}

    void afficherDetails() override {
        cout << "Fleur - Nom : " << nom << endl;
        cout << "Origine : " << origine << endl;
        cout << "Description : " << description << endl;
        cout << "Consigne : " << consigne << endl;
    }
};

class Plante : public Store {
private:
    string nom;
    string origine;
    string description;
    string consigne;

public:
    Plante(string n, string o, string d, string c) : nom(n), origine(o), description(d), consigne(c) {}

    void afficherDetails() override {
        cout << "Plante - Nom : " << nom << endl;
        cout << "Origine : " << origine << endl;
        cout << "Description : " << description << endl;
        cout << "Consigne : " << consigne << endl;
    }
};

class Arbre : public Store {
private:
    string nom;
    string origine;
    string description;
    string consigne;

public:
    Arbre(string n, string o, string d, string c) : nom(n), origine(o), description(d), consigne(c) {}

    void afficherDetails() override {
        cout << "Arbre - Nom : " << nom << endl;
        cout << "Origine : " << origine << endl;
        cout << "Description : " << description << endl;
        cout << "Consigne : " << consigne << endl;
    }
};

class Graine : public Store {
private:
    string nom;
    string origine;
    string description;
    string consigne;

public:
    Graine(string n, string o, string d, string c) : nom(n), origine(o), description(d), consigne(c) {}

    void afficherDetails() override {
        cout << "Graine - Nom : " << nom << endl;
        cout << "Origine : " << origine << endl;
        cout << "Description : " << description << endl;
        cout << "Consigne : " << consigne << endl;
    }
};

class Herbe : public Store {
private:
    string nom;
    string origine;
    string description;
    string consigne;

public:
    Herbe(string n, string o, string d, string c) : nom(n), origine(o), description(d), consigne(c) {
    }

    void afficherDetails() override {
        cout << "Herbe - Nom : " << nom << endl;
        cout << "Origine : " << origine << endl;
        cout << "Description : " << description << endl;
        cout << "Consigne : " << consigne << endl;
    }
};

class Ustensiles : public Store {
private:
    string nom;
    int prix;
    string description;
    string utilisation;

public:
    Ustensiles(string n, string d, string u, int p) : nom(n), description(d), utilisation(u), prix(p) {
    }

    void afficherDetails() override {
        cout << "Ustensile - Nom : " << nom << endl;
        cout << "Prix : " << prix << endl;
        cout << "Description : " << description << endl;
        cout << "Utilisation : " << utilisation << endl;
    }
};

class Accessoires : public Store {
private:
    string type;
    int prix;
    string utilisation;

public:
    Accessoires(string t, string u, int p) : type(t), utilisation(u), prix(p) {
    }

    void afficherDetails() override {
        cout << "Accessoire - Type : " << type << endl;
        cout << "Prix : " << prix << endl;
        cout << "Utilisation : " << utilisation << endl;
    }
};

class LivreDeJardinage {
private:
    string titre;
    string auteur;
    int anneeDePublication;

public:
    LivreDeJardinage(string titre, string auteur, int anneeDePublication)
        : titre(titre), auteur(auteur), anneeDePublication(anneeDePublication) {
    }

    void afficherDetails() {
        cout << "Titre : " << titre << endl;
        cout << "Auteur : " << auteur << endl;
        cout << "Année de publication : " << anneeDePublication << endl;
    }
};

int main() {
    Fleur fleur("Rose", "France", "Une belle rose rouge.", "Arroser régulièrement");
    Plante plante("Aloe Vera", "Afrique du Sud", "Une plante succulente.", "Exposition à la lumière indirecte.");
    Arbre arbre("Chêne", "Europe", "Un grand chêne.", "Plantation en plein soleil.");
    Graine graine("Tomate", "Amérique du Sud", "Des graines de tomate.", "Planter à une profondeur de 1 cm.");
    Herbe herbe("Basilic", "Inde", "De l'herbe aromatique.", "Besoin d'arrosage fréquent.");
    LivreDeJardinage livreDeJardinage("Le Guide du Jardinage Bio", "Jean Jardinier", 2020);
    Ustensiles ustensile("Pelle", "Pelle de jardinage en acier", "Creuser", 10);
    Accessoires accessoire("Gants", "Protection des mains", 5);

    fleur.afficherDetails();
    cout << endl;
    plante.afficherDetails();
    cout << endl;
    arbre.afficherDetails();
    cout << endl;
    graine.afficherDetails();
    cout << endl;
    herbe.afficherDetails();
    cout << endl;
    livreDeJardinage.afficherDetails();
    cout << endl;
    ustensile.afficherDetails();
    cout << endl;
    accessoire.afficherDetails();

    return 0;
}
