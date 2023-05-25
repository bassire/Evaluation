#ifndef VEHICULE_H
#define VEHICULE_H

typedef struct {
    char marque[50];
    char modele[50];
    int annee;
    char couleur[20];
    int identifiant;
} Vehicule;

void ajouterVehicule();
void supprimerVehicule();
void modifierVehicule();
void afficherListeVehicules();

#endif