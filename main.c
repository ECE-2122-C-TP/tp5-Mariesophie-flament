#include <stdio.h>
#include "exercices.h"
#include "fonctions.h"
#include "structures.h"
#include "tableaux.h"

/* MACRO EX2*/
#define NB_ELEM_MAX 100
/* MACROS EX3*/
#define NB_LIGNES 3
#define NB_COLONNES 4
#define NB_ENTIERS 12

int main()
{
    printf("=====\tTP : 5\t=====\n");
    int choixExercice = 0;

    //On demande son choix à l'utilisateur
    printf("Quel exercice voulez-vous lancer ?\n");

    do{
        scanf("%d", &choixExercice);
        switch (choixExercice) {
            case 1 :
                exercice1();
                break;
            case 2 :
                exercice2();
                break;
            case 3 :
                exercice3();
                break;
            case 0 :
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    }while (choixExercice != 0);

}