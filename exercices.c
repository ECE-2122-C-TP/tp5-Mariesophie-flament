//
// Created by Marie-Sophie Flament on 06/10/2021.
//

#include <stdio.h>
#include "exercices.h"
#include "structures.h"
#include "fonctions.h"

void exercice1()
{
    nombreRationnel monNombre;
    monNombre = saisieNb();
    affichageNb(monNombre);
    multiplication (monNombre,monNombre, monNombre);
    addition(monNombre,monNombre, monNombre);
    pgcd (monNombre);
    simplification(monNombre);
}

// définition de la macro correspondant à la taille physique du tableau
#define NB_ELEM_MAX 100

void exercice2()
{
    // définition d'un tableau de 100 éléments
    int monTableau[NB_ELEM_MAX];
    int N = 0, max = 0; // N : taille logique, max : maximum du tableau pour la dernière partie du programme
    printf("Combien voulez-vous entrer d'entiers dans votre tableau?\n");
    scanf("%d", &N);
    // boucle au cas où l'utilisateur entrerait une taille logique supérieure à la taille physique
    if (N > NB_ELEM_MAX)
    {
        printf("Combien voulez-vous entrer d'entiers (< = 100) ?\n");
        scanf("%d", &N);
    }
    // on demande à l'utilisateur d'entrer une à une toutes les valeurs souhaitées du tableau
    for (int i = 0; i < N; i++)
    {
        monTableau[i] = 0;
        printf("Entrez la valeur %d de votre tableau\n", i+1);
        scanf("%d", &monTableau[i]);
    }
    // on affiche le tableau pour vérifier que tout aille bien
    for (int j = 0; j < N; j++)
    {
        printf("%d ", monTableau[j]);
    }
    /* on cherche à afficher le maximum du tableau
     * IN : valeurs du tableau entrées préalablement
     * OUT : maximum du tableau
     */
    for (int k = 0 ; k < N ; k++)
    {
        if(monTableau[k]>max){
            max = monTableau[k];
            // on vérifie chaque élément du tableau et à chaque fois qu'une valeur est supérieure
            // à celle contenue dans max on la lui réassigne afin d'obtenir le maximum
        }
    }
    printf ("\nLe maximum du tableau est : %d", max);

}

// définition des macros correspondant aux tailles de la matrice 2D (3x4) et la taille physique du tableau 1D
#define NB_LIGNES 3
#define NB_COLONNES 4
#define NB_ENTIERS 12

void exercice3()
{
    int i = 0, j = 0;
    int tableau3D[NB_LIGNES][NB_COLONNES];
    // on demande à l'utilisateur d'entrer les valeurs de la matrice 3x4 à la main
    printf("Entrez les 12 valeurs de votre tableau\n");
    for (i = 0; i < NB_LIGNES; i++) {
        for (j = 0; j < NB_COLONNES; j++) {
            tableau3D[i][j] = 0;
            scanf("%d", &tableau3D[i][j]);
        }
    }
    // on transforme cette matrice 2D choisie par l'utilisateur en tableau 1D (normalement!)
    mettreEnLigne(tableau3D[NB_LIGNES][NB_COLONNES]);
}