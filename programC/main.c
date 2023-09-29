#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTS 100



typedef struct {
    char nom[50];
    char prenom[50];
    char codePostale[5];
    char ville[10];
    char telephone[15];
    char email[20];
} Client;

int nbClients = 0;
Client listeClients[MAX_CLIENTS];


void ajouterClient() {
    if (nbClients >= MAX_CLIENTS) {
        printf("La liste des clients est pleine. Impossible d'ajouter un nouveau client.\n");
        return;
    }

    printf("Nom du client : ");
    scanf("%s", listeClients[nbClients].nom);

    printf("Prenom du Client: ");
    scanf("%s", listeClients[nbClients].prenom);

    printf("Code postale du client : ");
    scanf("%s", listeClients[nbClients].codePostale);

    printf("Ville  du client : ");
    scanf("%s", listeClients[nbClients].ville);

    printf("Numero de telephone du client : ");
    scanf("%s", listeClients[nbClients].telephone);

    printf("Email du client : ");
    scanf("%s", listeClients[nbClients].email);

    nbClients++;

    printf("Le client a ete ajoute avec succes.\n");
}

void afficherClients() {
    printf("Liste des clients :\n");

    for (int i = 0; i < nbClients; i++) {
        printf("Client %d :\n", i + 1);
        printf("Nom : %s\n", listeClients[i].nom);
        printf("prenom : %s\n", listeClients[i].prenom);
        printf("Ville : %s\n\n", listeClients[i].ville);
        printf("Code Postale : %s\n", listeClients[i].codePostale);
        printf("Email : %s\n", listeClients[i].email);
        printf("Telephone : %s\n\n", listeClients[i].telephone);
    }
}

void modifierClient() {
    int numeroClient;

    printf("Entrez le numero du client a modifier : ");
    scanf("%d", &numeroClient);
    numeroClient--;

    if (numeroClient < 0 || numeroClient >= nbClients) {
        printf("Numero de client invalide.\n");
        return;
    }

    int choixModification;
    printf("Que voulez-vous modifier pour ce client ?\n");
    printf("1. Numero de telephone\n");
    printf("2. Code postale\n");
    printf("3. Ville\n");
    printf("4. Email\n");
    printf("Entrez le numero correspondant a votre choix : ");
    scanf("%d", &choixModification);

    switch (choixModification) {
    case 1:
    {
        char nouveauTelephone[15];
        printf("Nouveau numero de telephone du client : ");
        scanf("%s", nouveauTelephone);
        strcpy(listeClients[numeroClient].telephone, nouveauTelephone);
        break;
    }
    case 2:
    {
        char nouveauCodePostale[5];
        printf("Nouveau code postale du client : ");
        scanf("%s", nouveauCodePostale);
        strcpy(listeClients[numeroClient].codePostale, nouveauCodePostale);
        break;
    }
    case 3:
    {
        char nouvelleVille[10];
        printf("Nouvelle ville du client : ");
        scanf("%s", nouvelleVille);
        strcpy(listeClients[numeroClient].ville, nouvelleVille);
        break;
    }
    case 4:
    {
        char nouveauEmail[20];
        printf("Nouveau mail du client : ");
        scanf("%s", nouveauEmail);
        strcpy(listeClients[numeroClient].email, nouveauEmail);
        break;
    }
    default:
        printf("Choix invalide.\n");
        return;
    }

    printf("Le client a ete modifie avec succes.\n");
}


void supprimerClient() {
    int numeroClient;

    printf("Entrez le numero du client a supprimer : ");
    scanf("%d", &numeroClient);
    numeroClient--;

    if (numeroClient < 0 || numeroClient >= nbClients) {
        printf("Numero de client invalide.\n");
        return;
    }

    for (int i = numeroClient; i < nbClients - 1; i++) {
        listeClients[i] = listeClients[i + 1];
    }

    nbClients--;

    printf("Le client a ete supprime avec succes.\n");
}
 

int main() {
    int choix;

    do {
        printf("Gestionnaire de clients et de fleurs - Menu :\n");
        printf("1. Ajouter un client\n");
        printf("2. Afficher tous les clients\n");
        printf("3. Modifier un client\n");
        printf("4. Supprimer un client\n");
        printf("8. Quitter\n");

        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            ajouterClient();
            break;
        case 2:
            afficherClients();
            break;
        case 3:
            modifierClient();
            break;
        case 4:
            supprimerClient();
            break;
        case 5:
            printf("Merci d'avoir utilise le gestionnaire de clients .\n");
            break;
        default:
            printf("Choix invalide.\n");
            break;
        }

        printf("\n");
    } while (choix != 5);

    return 0;
}
