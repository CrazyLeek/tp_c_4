#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hall_of_fame.h"

// Affiche la struct donnee
void afficherDonnee(FILE * file, donnee_t d)
{
   fprintf(file, "%s : %s avec %d\n", d.nom, d.alias, d.score);
}


void lireCaracteres(char * adresse, int taille_max, FILE * file)
{  
   int k=0;
   int continuer=1;

   fgets(adresse, taille_max, file);

   while (adresse[k] != 0 && continuer)
   {
      if (adresse[k] == '\n')
      {
         adresse[k] = 0;
         continuer = 0;
      }

      k++;
   }
}


//Demande à l'utilisateur de remplir une donnee_t
void saisirDonnee(FILE *file, donnee_t * p)
{  
   const int max_taille_score = 50;
   char temp[max_taille_score];

   printf("Nom du jeu : \n");
   lireCaracteres(p->nom, DONNEE_NOM_TAILLE, file);

   printf("Nom du joueur : \n");
   lireCaracteres(p->alias, DONNEE_ALIAS_TAILLE, file);

   printf("Score :\n");
   lireCaracteres(temp, max_taille_score, file);
   p->score = atoi(temp);

}


//Lit des donnee_t dans un fichier
int tableauFromFilename(char * nom_fichier)
{
   FILE * file;
   int taille = 0;



   file = fopen(nom_fichier, "r");

   if (file != NULL)
   {
      
   }
}
