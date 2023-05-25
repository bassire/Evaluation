#include <stdio.h>
#include "vehicule.h"
#include "statistiques.h"
#include "liste_vehicules.h"

int main() {
    // Code de lancement de l'application
    // ...

    int choix = 0;

    while (choix != 6) {
        // Affichage du menu
        printf("=== APPLICATION DE GESTION DES VEHICULES ===\n");
        printf("1. Ajouter un véhicule\n");
        printf("2. Supprimer un véhicule\n");
        printf("3. Modifier un véhicule\n");
        printf("4. Afficher la liste des véhicules\n");
        printf("5. Afficher des statistiques\n");
        printf("6. Quitter l'application\n");
        printf("Choix : ");
        scanf("%d", &choix);

        // Vidage du tampon d'entrée
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        // Traitement du choix de l'utilisateur
        switch (choix) {
            case 1:
                ajouterVehicule();
                break;
            case 2:
                supprimerVehicule();
                break;
            case 3:
                modifierVehicule();
                break;
            case 4:
                afficherListeVehicules();
                break;
            case 5:
                afficherStatistiques();
                break;
            case 6:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }

        printf("\n");
    }

    return 0;
}