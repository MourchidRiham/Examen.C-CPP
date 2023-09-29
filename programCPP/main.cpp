#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Store {
public:
    virtual void afficherDetails() = 0;
    virtual ~Store() {}
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
    string getNom() const { return nom; }
    string getOrigine() const { return origine; }
    string getDescription() const { return description; }
    string getConsigne() const { return consigne; }


    void setNom(string n) { nom = n; }
    void setOrigine(string o) { origine = o; }
    void setDescription(string d) { description = d; }
    void setConsigne(string c) { consigne = c; }
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
    string getNom() const { return nom; }
    string getOrigine() const { return origine; }
    string getDescription() const { return description; }
    string getConsigne() const { return consigne; }

    void setNom(string n) { nom = n; }
    void setOrigine(string o) { origine = o; }
    void setDescription(string d) { description = d; }
    void setConsigne(string c) { consigne = c; }
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
    string getNom() const { return nom; }
    string getOrigine() const { return origine; }
    string getDescription() const { return description; }
    string getConsigne() const { return consigne; }


    void setNom(string n) { nom = n; }
    void setOrigine(string o) { origine = o; }
    void setDescription(string d) { description = d; }
    void setConsigne(string c) { consigne = c; }
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
    string getNom() const { return nom; }
    string getOrigine() const { return origine; }
    string getDescription() const { return description; }
    string getConsigne() const { return consigne; }

    void setNom(string n) { nom = n; }
    void setOrigine(string o) { origine = o; }
    void setDescription(string d) { description = d; }
    void setConsigne(string c) { consigne = c; }
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
    string getNom() const { return nom; }
    string getOrigine() const { return origine; }
    string getDescription() const { return description; }
    string getConsigne() const { return consigne; }


    void setNom(string n) { nom = n; }
    void setOrigine(string o) { origine = o; }
    void setDescription(string d) { description = d; }
    void setConsigne(string c) { consigne = c; }
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

    string getNom() const { return nom; }
    int getPrix() const { return prix; }
    string getDescription() const { return description; }
    string getUtilisation() const { return utilisation; }


    void setNom(string n) { nom = n; }
    void setPrix(int p) { prix = p; }
    void setDescription(string d) { description = d; }
    void setUtilisation(string u) { utilisation = u; }
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
    string getType() const { return type; }
    int getPrix() const { return prix; }
    string getUtilisation() const { return utilisation; }

    void setType(string t) { type = t; }
    void setPrix(int p) { prix = p; }
    void setUtilisation(string u) { utilisation = u; }
};


class LivreDeJardinage : public Store {
private:
    string titre;
    string auteur;
    int anneeDePublication;

public:
    LivreDeJardinage(string titre, string auteur, int anneeDePublication)
        : titre(titre), auteur(auteur), anneeDePublication(anneeDePublication) {
    }

    void afficherDetails() override {
        cout << "Livre de Jardinage - Titre : " << titre << endl;
        cout << "Auteur : " << auteur << endl;
        cout << "Année de publication : " << anneeDePublication << endl;
    }

    string getTitre() const { return titre; }
    string getAuteur() const { return auteur; }
    int getAnneeDePublication() const { return anneeDePublication; }
};

    void setType(string t) { type = t; }
    void setPrix(int p) { prix = p; }
    void setUtilisation(string u) { utilisation = u; }
};




    int main() {
        vector<Store*> magasin; 

        Fleur fleur("Rose", "France", "Une belle rose rouge.", "Arroser régulièrement");
        Plante plante("Aloe Vera", "Afrique du Sud", "Une plante succulente.", "Exposition à la lumière indirecte.");
        Arbre arbre("Chêne", "Europe", "Un grand chêne.", "Plantation en plein soleil.");
        Graine graine("Tomate", "Amérique du Sud", "Des graines de tomate.", "Planter à une profondeur de 1 cm.");
        Herbe herbe("Basilic", "Inde", "De l'herbe aromatique.", "Besoin d'arrosage fréquent.");
        LivreDeJardinage livreDeJardinage("Le Guide du Jardinage Bio", "Jean Jardinier", 2020);
        Ustensiles ustensile("Pelle", "Pelle de jardinage en acier", "Creuser", 10);
        Accessoires accessoire("Gants", "Protection des mains", 5);

        while (true) {
            cout << "Menu : " << endl;
            cout << "1. Afficher les articles" << endl;
            cout << "2. Ajouter un article" << endl;
            cout << "3. Modifier un article" << endl;
            cout << "4. Supprimer un article" << endl;
            cout << "5. Quitter" << endl;

            int choix;
            cin >> choix;

            switch (choix) {
            case 1:
                for (Store* article : magasin) {
                    article->afficherDetails();
                    cout << "------------------------" << endl;
                   
                }
                break;

            case 2:
          
                cout << "1. Fleur" << endl;
                cout << "2. Plante" << endl;
                cout << "3. Arbre" << endl;
                cout << "4. Graine" << endl;
                cout << "5. Herbe" << endl;
                cout << "6. Ustensiles" << endl;
                cout << "7. Accessoires" << endl;

                int type;
                cin >> type;

                switch (type) {
                case 1:
                {
                    string nom, origine, description, consigne;
                    cout << "Nom de la fleur : ";
                    cin.ignore();  
                    getline(cin, nom);
                    cout << "Origine de la fleur : ";
                    getline(cin, origine);
                    cout << "Description de la fleur : ";
                    getline(cin, description);
                    cout << "Consigne pour la fleur : ";
                    getline(cin, consigne);

                    Fleur* nouvelleFleur = new Fleur(nom, origine, description, consigne);
                    magasin.push_back(nouvelleFleur);
                    cout << "Fleur ajoutée avec succès !" << endl;
                }
                break;
                    break;

                case 2:
                {
                    string nom, origine, description, consigne;
                    cout << "Nom de la plante : ";
                    cin.ignore();  
                    getline(cin, nom);
                    cout << "Origine de la plante : ";
                    getline(cin, origine);
                    cout << "Description de la plante : ";
                    getline(cin, description);
                    cout << "Consigne pour la plante : ";
                    getline(cin, consigne);

                    Plante* nouvellePlante = new Plante(nom, origine, description, consigne);
                    magasin.push_back(nouvellePlante);
                    cout << "Plante ajoutée avec succès !" << endl;
                }
                break;
                    break;

                case 3:
                    
                {
                    string nom, origine, description, consigne;
                    cout << "Nom de l'arbre : ";
                    cin.ignore();  
                    getline(cin, nom);
                    cout << "Origine de l'arbre : ";
                    getline(cin, origine);
                    cout << "Description de l'arbre : ";
                    getline(cin, description);
                    cout << "Consigne pour l'arbre : ";
                    getline(cin, consigne);

                    Arbre* nouvelArbre = new Arbre(nom, origine, description, consigne);
                    magasin.push_back(nouvelArbre);
                    cout << "Arbre ajouté avec succès !" << endl;
                }
                break;

                case 4:
                 
                {
                    string nom, origine, description, consigne;
                    cout << "Nom de la graine : ";
                    cin.ignore();  
                    getline(cin, nom);
                    cout << "Origine de la graine : ";
                    getline(cin, origine);
                    cout << "Description de la graine : ";
                    getline(cin, description);
                    cout << "Consigne pour la graine : ";
                    getline(cin, consigne);

                    Graine* nouvelleGraine = new Graine(nom, origine, description, consigne);
                    magasin.push_back(nouvelleGraine);
                    cout << "Graine ajoutée avec succès !" << endl;
                }
                break;

                case 5:
                   
                {
                    string nom, origine, description, consigne;
                    cout << "Nom de l'herbe : ";
                    cin.ignore();  
                    getline(cin, nom);
                    cout << "Origine de l'herbe : ";
                    getline(cin, origine);
                    cout << "Description de l'herbe : ";
                    getline(cin, description);
                    cout << "Consigne pour l'herbe : ";
                    getline(cin, consigne);

                    Herbe* nouvelleHerbe = new Herbe(nom, origine, description, consigne);
                    magasin.push_back(nouvelleHerbe);
                    cout << "Herbe ajoutée avec succès !" << endl;
                }
                break;

                case 6:
                 
                {
                    string nom, description, utilisation;
                    int prix;
                    cout << "Nom de l'ustensile : ";
                    cin.ignore(); 
                    getline(cin, nom);
                    cout << "Description de l'ustensile : ";
                    getline(cin, description);
                    cout << "Utilisation de l'ustensile : ";
                    getline(cin, utilisation);
                    cout << "Prix de l'ustensile : ";
                    cin >> prix;

                    Ustensiles* nouvelUstensile = new Ustensiles(nom, description, utilisation, prix);
                    magasin.push_back(nouvelUstensile);
                    cout << "Ustensile ajouté avec succès !" << endl;
                }
                break;

                case 7:
              
                {
                    string type, utilisation;
                    int prix;
                    cout << "Type de l'accessoire : ";
                    cin.ignore();  
                    getline(cin, type);
                    cout << "Utilisation de l'accessoire : ";
                    getline(cin, utilisation);
                    cout << "Prix de l'accessoire : ";
                    cin >> prix;

                    Accessoires* nouvelAccessoire = new Accessoires(type, utilisation, prix);
                    magasin.push_back(nouvelAccessoire);
                    cout << "Accessoire ajouté avec succès !" << endl;
                }
                break;
                

                default:
                    cout << "Type d'article invalide." << endl;
                    break;
                }
                break;

            case 3:
            {
                cout << "Sélectionnez l'article que vous souhaitez modifier : " << endl;
                for (int i = 0; i < magasin.size(); ++i) {
                    cout << i + 1 << ". ";
                    magasin[i]->afficherDetails();
                }

                int choixModification;
                cout << "Entrez le numéro de l'article à modifier : ";
                cin >> choixModification;

                if (choixModification >= 1 && choixModification <= magasin.size()) {
                    Store* articleAModifier = magasin[choixModification - 1];
                    cout << "Nouveaux détails pour l'article : " << endl;

                  
                    if (dynamic_cast<Fleur*>(articleAModifier)) {
                        Fleur* fleurAModifier = dynamic_cast<Fleur*>(articleAModifier);
                        string nom, origine, description, consigne;
                        cout << "Nouveau nom de la fleur : ";
                        cin.ignore();
                        getline(cin, nom);
                        cout << "Nouvelle origine de la fleur : ";
                        getline(cin, origine);
                        cout << "Nouvelle description de la fleur : ";
                        getline(cin, description);
                        cout << "Nouvelle consigne pour la fleur : ";
                        getline(cin, consigne);

                   
                        fleurAModifier->setNom(nom);
                        fleurAModifier->setOrigine(origine);
                        fleurAModifier->setDescription(description);
                        fleurAModifier->setConsigne(consigne);
                        cout << "Fleur mise à jour avec succès !" << endl;
                    }
                    else if (dynamic_cast<Plante*>(articleAModifier)) {
                        Plante* planteAModifier = dynamic_cast<Plante*>(articleAModifier);
                        string nom, origine, description, consigne;
                        cin.ignore();
                        cout << "Nouveau nom de la plante : ";
                        getline(cin, nom);
                        cout << "Nouvelle origine de la plante : ";
                        getline(cin, origine);
                        cout << "Nouvelle description de la plante : ";
                        getline(cin, description);
                        cout << "Nouvelle consigne pour la plante : ";
                        getline(cin, consigne);

                        planteAModifier->setNom(nom);
                        planteAModifier->setOrigine(origine);
                        planteAModifier->setDescription(description);
                        planteAModifier->setConsigne(consigne);
                        cout << "Plante mise à jour avec succès !" << endl;
                    }
                    else if (dynamic_cast<Arbre*>(articleAModifier)) {
                        Arbre* arbreAModifier = dynamic_cast<Arbre*>(articleAModifier);
                        string nom, origine, description, consigne;
                        cin.ignore();
                        cout << "Nouveau nom de l'arbre : ";
                        getline(cin, nom);
                        cout << "Nouvelle origine de l'arbre : ";
                        getline(cin, origine);
                        cout << "Nouvelle description de l'arbre : ";
                        getline(cin, description);
                        cout << "Nouvelle consigne pour l'arbre : ";
                        getline(cin, consigne);

                        arbreAModifier->setNom(nom);
                        arbreAModifier->setOrigine(origine);
                        arbreAModifier->setDescription(description);
                        arbreAModifier->setConsigne(consigne);
                        cout << "Arbre mis à jour avec succès !" << endl;
                    }
                    else if (dynamic_cast<Ustensiles*>(articleAModifier)) {
                        Ustensiles* ustensileAModifier = dynamic_cast<Ustensiles*>(articleAModifier);
                        string nom, description, utilisation;
                        int prix;
                        cin.ignore();
                        cout << "Nouveau nom de l'ustensile : ";
                        getline(cin, nom);
                        cout << "Nouvelle description de l'ustensile : ";
                        getline(cin, description);
                        cout << "Nouvelle utilisation de l'ustensile : ";
                        getline(cin, utilisation);
                        cout << "Nouveau prix de l'ustensile : ";
                        cin >> prix;

                        ustensileAModifier->setNom(nom);
                        ustensileAModifier->setDescription(description);
                        ustensileAModifier->setUtilisation(utilisation);
                        ustensileAModifier->setPrix(prix);
                        cout << "Ustensile mis à jour avec succès !" << endl;
                    }
                    else if (dynamic_cast<Accessoires*>(articleAModifier)) {
                        Accessoires* accessoireAModifier = dynamic_cast<Accessoires*>(articleAModifier);
                        string type, utilisation;
                        int prix;
                        cin.ignore();
                        cout << "Nouveau type d'accessoire : ";
                        getline(cin, type);
                        cout << "Nouvelle utilisation de l'accessoire : ";
                        getline(cin, utilisation);
                        cout << "Nouveau prix de l'accessoire : ";
                        cin >> prix;

                        accessoireAModifier->setType(type);
                        accessoireAModifier->setUtilisation(utilisation);
                        accessoireAModifier->setPrix(prix);
                        cout << "Accessoire mis à jour avec succès !" << endl;
                    }
                    else if (dynamic_cast<Graine*>(articleAModifier)) {
                        Graine* graineAModifier = dynamic_cast<Graine*>(articleAModifier);
                        string nom, origine, description, consigne;
                        cin.ignore();
                        cout << "Nouveau nom de la graine : ";
                        getline(cin, nom);
                        cout << "Nouvelle origine de la graine : ";
                        getline(cin, origine);
                        cout << "Nouvelle description de la graine : ";
                        getline(cin, description);
                        cout << "Nouvelle consigne pour la graine : ";
                        getline(cin, consigne);

                        graineAModifier->setNom(nom);
                        graineAModifier->setOrigine(origine);
                        graineAModifier->setDescription(description);
                        graineAModifier->setConsigne(consigne);
                        cout << "Graine mise à jour avec succès !" << endl;
                    }
                    else if (dynamic_cast<Herbe*>(articleAModifier)) {
                        Herbe* herbeAModifier = dynamic_cast<Herbe*>(articleAModifier);
                        string nom, origine, description, consigne;
                        cin.ignore();
                        cout << "Nouveau nom de l'herbe : ";
                        getline(cin, nom);
                        cout << "Nouvelle origine de l'herbe : ";
                        getline(cin, origine);
                        cout << "Nouvelle description de l'herbe : ";
                        getline(cin, description);
                        cout << "Nouvelle consigne pour l'herbe : ";
                        getline(cin, consigne);

                        herbeAModifier->setNom(nom);
                        herbeAModifier->setOrigine(origine);
                        herbeAModifier->setDescription(description);
                        herbeAModifier->setConsigne(consigne);
                        cout << "Herbe mise à jour avec succès !" << endl;
                        }

                    
                }
                else {
                    cout << "Numéro d'article invalide." << endl;
                }
            }
            break;

                break;

            case 4:

            {
                cout << "Sélectionnez l'article que vous souhaitez supprimer : " << endl;
                for (int i = 0; i < magasin.size(); ++i) {
                    cout << i + 1 << ". ";
                    magasin[i]->afficherDetails();
                }

                int choixSuppression;
                cout << "Entrez le numéro de l'article à supprimer : ";
                cin >> choixSuppression;

                if (choixSuppression >= 1 && choixSuppression <= magasin.size()) {
                 
                    delete magasin[choixSuppression - 1];
                    magasin.erase(magasin.begin() + choixSuppression - 1);
                    cout << "Article supprimé avec succès !" << endl;
                }
                else {
                    cout << "Numéro d'article invalide." << endl;
                }
            }
            break;


            case 5:
                for (Store* article : magasin) {
                    delete article;
                }
                cout << "Au revoir !" << endl;
                return 0;

            default:
                cout << "Choix invalide." << endl;
        }
    }

    return 0;
}






