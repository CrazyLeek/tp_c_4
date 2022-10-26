#ifndef hall_of_fame_h
#define hall_of_fame_h

#define DONNEE_NOM_TAILLE 100
#define DONNEE_ALIAS_TAILLE 40

#define TAILLE_MAX 50

/* DECLARATION DES TYPES PERSONNELS */
// et de leur typedef si besoin

typedef struct donnee
{
    int score;
    char nom[DONNEE_NOM_TAILLE];
    char alias[DONNEE_ALIAS_TAILLE];
}donnee_t;


/* DECLARATIONS DES METHODES */
void afficherDonnee(FILE *, donnee_t);
void saisirDonnee (FILE * , donnee_t *);
// mettre ici les autres declarations

void lireCaracteres(char *, int, FILE *);

#endif