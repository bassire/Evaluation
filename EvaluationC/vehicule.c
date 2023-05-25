#include <stdio.h>
#include "vehicule.h"

void ajouterVehicule() {
    // Saisie des informations du véhicule
    printf("Ajouter un nouveau véhicule :\n");
    printf("Marque : ");
    char marque[100];
    scanf("%s", marque);

    printf("Modèle : ");
    char modele[100];
    scanf("%s", modele);

    printf("Année : ");
    int annee;
    scanf("%d", &annee);

    printf("Couleur : ");
    char couleur[100];
    scanf("%s", couleur);

    // Code pour ajouter le véhicule à la liste
    // ...
}

void supprimerVehicule() {
    // Saisie de l'identifiant du véhicule à supprimer
    printf("Supprimer un véhicule :\n");
    printf("Identifiant : ");
    int identifiant;
    scanf("%d", &identifiant);

    // Code pour supprimer le véhicule de la liste
    // ...
}

void modifierVehicule() {
    // Saisie de l'identifiant du véhicule à modifier
    printf("Modifier un véhicule :\n");
    printf("Identifiant : ");
    int identifiant;
    scanf("%d", &identifiant);

    // Code pour modifier le véhicule dans la liste
    // ...
}

void afficherListeVehicules() {
    // Code pour afficher la liste des véhicules
    printf("Afficher la liste des véhicules :\n");
    // ...
}