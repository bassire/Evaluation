class Vehicule:
    def __init__(self, marque, modele, annee, couleur):
        self.marque = marque
        self.modele = modele
        self.annee = annee
        self.couleur = couleur

    def set_marque(self, marque):
        self.marque = marque

    def set_modele(self, modele):
        self.modele = modele

    def set_annee(self, annee):
        self.annee = annee

    def set_couleur(self, couleur):
        self.couleur = couleur

    def __str__(self):
        return f"{self.marque} {self.modele} ({self.annee})"


class Voiture(Vehicule):
    def __init__(self, marque, modele, annee, couleur, nombre_portes):
        super().__init__(marque, modele, annee, couleur)
        self.nombre_portes = nombre_portes

    def set_nombre_portes(self, nombre_portes):
        self.nombre_portes = nombre_portes

    def __str__(self):
        return f"Voiture {super().__str__()}, {self.nombre_portes} portes"


class Moto(Vehicule):
    def __init__(self, marque, modele, annee, couleur, cylindree):
        super().__init__(marque, modele, annee, couleur)
        self.cylindree = cylindree

    def set_cylindree(self, cylindree):
        self.cylindree = cylindree

    def __str__(self):
        return f"Moto {super().__str__()}, cylindrée : {self.cylindree}cc"


class Autobus(Vehicule):
    def __init__(self, marque, modele, annee, couleur, capacite_passagers):
        super().__init__(marque, modele, annee, couleur)
        self.capacite_passagers = capacite_passagers

    def set_capacite_passagers(self, capacite_passagers):
        self.capacite_passagers = capacite_passagers

    def __str__(self):
        return f"Autobus {super().__str__()}, capacité passagers : {self.capacite_passagers}"


class Metro(Vehicule):
    def __init__(self, marque, modele, annee, couleur, lignes):
        super().__init__(marque, modele, annee, couleur)
        self.lignes = lignes

    def set_lignes(self, lignes):
        self.lignes = lignes

    def __str__(self):
        return f"Métro {super().__str__()}, lignes : {', '.join(self.lignes)}"


class Application:
    def __init__(self):
        self.vehicle_list = []

    def start(self):
        print("Bienvenue dans l'application de gestion des véhicules !")
        self.menu()

    def menu(self):
        print("\nMenu:")
        print("1. Ajouter un véhicule")
        print("2. Supprimer un véhicule")
        print("3. Modifier un véhicule")
        print("4. Afficher des statistiques")
        print("5. Afficher la liste complète des véhicules")
        print("6. Rechercher un véhicule")
        print("7. Quitter l'application")
        choice = input("Veuillez sélectionner une option : ")

        if choice == "1":
            self.add_vehicle()