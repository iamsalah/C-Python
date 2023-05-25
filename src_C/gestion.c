#include <stdio.h>
#include <stdlib.h>

// Définition des structures

typedef struct {
    char nom[50];
    char prenom[50];
    int age;
} Personne;

typedef struct {
    char nom[50];
    char code[10];
    Personne* professeur;
} Cours;

typedef struct {
    char nom[50];
    char prenom[50];
    int age;
    char matricule[10];
    Cours** cours_inscrits;
    int nombre_cours;
} Etudiant;

typedef struct {
    char nom[50];
    char prenom[50];
    int age;
    char specialite[50];
    Cours** cours_enseignes;
    int nombre_cours;
} Professeur;

typedef struct {
    char nom[50];
    Etudiant** etudiants;
    int nombre_etudiants;
    Professeur** professeurs;
    int nombre_professeurs;
    Cours** cours;
    int nombre_cours;
} Universite;

// Déclaration des fonctions

void afficher_informations_personne(Personne* personne);
void afficher_informations_etudiant(Etudiant* etudiant);
void afficher_informations_professeur(Professeur* professeur);
void afficher_informations_cours(Cours* cours);
void lancer_application();
void utiliser_application();
void quitter_application();

// Point d'entrée de l'application
int main() {
    lancer_application();

    // Création des objets
    Personne* professeur1 = malloc(sizeof(Personne));
    strcpy(professeur1->nom, "Durand");
    strcpy(professeur1->prenom, "Pierre");
    professeur1->age = 40;

    Personne* professeur2 = malloc(sizeof(Personne));
    strcpy(professeur2->nom, "Lefebvre");
    strcpy(professeur2->prenom, "Marie");
    professeur2->age = 38;

    Cours* cours1 = malloc(sizeof(Cours));
    strcpy(cours1->nom, "Introduction à l'Informatique");
    strcpy(cours1->code, "INFO101");
    cours1->professeur = professeur1;

    Cours* cours2 = malloc(sizeof(Cours));
    strcpy(cours2->nom, "Algèbre Linéaire");
    strcpy(cours2->code, "MATH201");
    cours2->professeur = professeur2;

    Etudiant* etudiant1 = malloc(sizeof(Etudiant));
    strcpy(etudiant1->nom, "Dupont");
    strcpy(etudiant1->prenom, "Jean");
    etudiant1->age = 20;
    strcpy(etudiant1->matricule, "E001");
    etudiant1->cours_inscrits = malloc(2 * sizeof(Cours*));
    etudiant1->cours_inscrits[0] = cours1;
    etudiant1->cours_inscrits[1] = NULL;
    etudiant1->nombre_cours = 1;

    Etudiant* etudiant2 = malloc(sizeof(Etudiant));
    strcpy(etudiant2->nom, "Martin");
    strcpy(etudiant2->prenom, "Sophie");
    etudiant2->age = 22;
    strcpy(etudiant2->matricule, "E002");
    etudiant2->cours_inscrits = malloc(2 * sizeof(Cours*));
    etudiant2->cours_inscrits[0] = cours1;
    etudiant2->cours_inscrits[1] = cours2;
    etudiant2->nombre_cours = 2;

    Universite* universite = malloc(sizeof(Universite));
    strcpy(universite->nom, "Université ABC");
    universite->etudiants = malloc(5 * sizeof(Etudiant*));
    universite->etudiants[0] = etudiant1;
    universite->etudiants[1] = etudiant2;
    universite->nombre_etudiants = 2;
    universite->professeurs = malloc(2 * sizeof(Professeur*));
    universite->professeurs[0] = professeur1;
    universite->professeurs[1] = professeur2;
    universite->nombre_professeurs = 2;
    universite->cours = malloc(2 * sizeof(Cours*));
    universite->cours[0] = cours1;
    universite->cours[1] = cours2;
    universite->nombre_cours = 2;

    // Affichage des informations
    printf("Informations de l'étudiant 1 :\n");
    afficher_informations_etudiant(etudiant1);

    printf("\nInformations de l'étudiant 2 :\n");
    afficher_informations_etudiant(etudiant2);

    printf("\nInformations du cours 1 :\n");
    afficher_informations_cours(cours1);

    utiliser_application();

    quitter_application();

    // Libération de la mémoire
    free(etudiant1->cours_inscrits);
    free(etudiant1);
    free(etudiant2->cours_inscrits);
    free(etudiant2);
    free(cours1);
    free(cours2);
    free(professeur1);
    free(professeur2);
    free(universite->etudiants);
    free(universite->professeurs);
    free(universite->cours);
    free(universite);
    
    return 0;
}

// Fonctions

void afficher_informations_personne(Personne* personne) {
    printf("Nom: %s\n", personne->nom);
    printf("Prénom: %s\n", personne->prenom);
    printf("Âge: %d\n", personne->age);
}

void afficher_informations_etudiant(Etudiant* etudiant) {
    afficher_informations_personne((Personne*)etudiant);
    printf("Matricule: %s\n", etudiant->matricule);
    printf("Cours inscrits:\n");
    for (int i = 0; i < etudiant->nombre_cours; i++) {
        afficher_informations_cours(etudiant->cours_inscrits[i]);
    }
}

void afficher_informations_professeur(Professeur* professeur) {
    afficher_informations_personne((Personne*)professeur);
    printf("Spécialité: %s\n", professeur->specialite);
}

void afficher_informations_cours(Cours* cours) {
    printf("Nom: %s\n", cours->nom);
    printf("Code: %s\n", cours->code);
    printf("Professeur:\n");
    afficher_informations_personne(cours->professeur);
}

void lancer_application() {
    printf("Application Universitaire lancée.\n");
}

void utiliser_application() {
    printf("Utilisation de l'application Universitaire.\n");
}

void quitter_application() {
    printf("Application Universitaire quittée.\n");
}
