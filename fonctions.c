//
// Created by Marie-Sophie Flament on 06/10/2021.
//
#include <stdio.h>
#include"fonctions.h"
#include "structures.h"

/*******************
 * Exercice 1 *
 *******************/

/* Fonction de saisie du numérateur et dénominateur du nombre rationnel
 * Paramètres :
 * - INOUT : nb, le tableau nombre rationnel auquel on assigne un numérateur et un dénominateur
 */
nombreRationnel saisieNb(void)
{
    nombreRationnel nb;
    printf("Veuillez entrer les numérateur et le dénominateur de votre nombre :\n");
    scanf(" %d %d", &nb.numerateur, &nb.denominateur);
    return nb;
}

/* Fonction d'affichage du nombre rationnel
 * Paramètres :
 * - INOUT : nb, le tableau nombre rationnel affiché
 */
void affichageNb(nombreRationnel nb)
{
    nb.fraction= (float) nb.numerateur/ (float) nb.denominateur;
    printf("Votre nombre est %d/%d = %.3f\n", nb.numerateur, nb.denominateur, nb.fraction);
}

/* Fonction de multiplication de deux nombres rationnels
 * Paramètres :
 * - IN : deux tableaux nb1 et nb2 nombres rationnels que l'on entre à la main
 * - OUT : nb, le tableau nombre rationnel résultat de la multiplication de nb1 et nb2
 */
void multiplication (nombreRationnel nb, nombreRationnel nb1, nombreRationnel nb2)
{
    printf("Numérateur et dénominateur nombre 1 :\n");
    scanf(" %d %d", &nb1.numerateur, &nb1.denominateur);
    printf("Numérateur et dénominateur nombre 2 :\n");
    scanf(" %d %d", &nb2.numerateur, &nb2.denominateur);
    nb.numerateur = nb1.numerateur * nb2.numerateur;
    nb.denominateur = nb1.denominateur * nb2.denominateur;
    nb.fraction= (float) nb.numerateur/ (float) nb.denominateur;
    printf("Le résultat de la multiplication est %d/%d = %.3f\n", nb.numerateur, nb.denominateur, nb.fraction);
}

/* Fonction d'addition de deux nombres rationnels
 * Paramètres :
 * - IN : deux tableaux nb1 et nb2 nombres rationnels que l'on entre à la main
 * - OUT : nb, le tableau nombre rationnel résultat de la multiplication de nb1 et nb2
 */
void addition(nombreRationnel nb, nombreRationnel nb1, nombreRationnel nb2)
{
    printf("Numérateur et dénominateur nombre 1 :\n");
    scanf(" %d %d", &nb1.numerateur, &nb1.denominateur);
    printf("Numérateur et dénominateur nombre 2 :\n");
    scanf(" %d %d", &nb2.numerateur, &nb2.denominateur);
    nb.numerateur = (nb1.numerateur * nb2.denominateur) + (nb2.numerateur * nb1.denominateur);
    nb.denominateur = nb1.denominateur * nb2.denominateur;
    nb.fraction= (float) nb.numerateur/ (float) nb.denominateur;
    printf("Le résultat de l'addition est %d/%d = %.3f\n", nb.numerateur, nb.denominateur, nb.fraction);
}

/* Fonction qui recherche le pgcd du numérateur et du dénominateur d'un nombre rationnel
 * Paramètres :
 * - IN : nb, le tableau nombre rationnel pour lequel on recherche un pgcd
 * - OUT : le pgcd du numérateur et du dénominateur si il existe, 0 sinon
 */
int pgcd (nombreRationnel nb)
{
    int i = 0, pgcd = 0;
    printf("Entrez un numérateur et un dénominateur\n");
    scanf(" %d %d", &nb.numerateur, &nb.denominateur);
    // on cherche un entier inférieur au numérateur et au dénominateur
    for (i=1; i <= nb.numerateur && i <= nb.denominateur; i++)
    {
        if (nb.numerateur%i==0 && nb.denominateur%i==0)
        {
            // si on trouve un entier i qui les divise tous les 2 on l'affecte au pgcd
            pgcd = i;
        }
        else
        {
            // si un tel entier n'existe pas le pgcd obtient la valeur 0
           pgcd = 0;
        }
    }
    if (pgcd != 0)
    {
        printf("Le PGCD du numérateur et du dénominateur de votre nombre est : %d\n",pgcd);
    }
    else
    {
        printf("Le PGCD du numérateur et du dénominateur de votre nombre n'existe pas\n");
    }
    return pgcd;
}


/* Fonction de simplification d'un nombre rationnel
 * Paramètres :
 * - INOUT : nb, le tableau nombre rationnel que l'on cherche à simplifier
 */

nombreRationnel simplification(nombreRationnel nb)
{
    int i = 0, pgcd = 0;
    printf("Veuillez entrer les numérateur et le dénominateur de votre nombre :\n");
    scanf(" %d %d", &nb.numerateur, &nb.denominateur);
    for (i=1; i <= nb.numerateur && i <= nb.denominateur; i++)
    {
        if (nb.numerateur%i==0 && nb.denominateur%i==0)
        {
            pgcd = i;
        }
    }
    if (pgcd != 0)
    {
        nb.numerateur /= pgcd;
        nb.denominateur /= pgcd;
    }
    printf("Votre nombre est %d/%d \n", nb.numerateur, nb.denominateur);
    return nb;
}

/*******************
 * Exercice 3 *
 *******************/

// définition des macros pour l'exercice 3
#define NB_LIGNES 3
#define NB_COLONNES 4
#define NB_ENTIERS 12

/* Fonction qui transforme une matrice 3x4 en tableau ligne
 * Paramètres :
 * - IN : la matrice 2D de dimension 3x4 (3 et 4 sont définis dans des macros)
 * - OUT : les valeurs de la matrice dans un seul tableau 1D
 * ici : problème, le tableau ne renvoie que la dernière valeur de la matrice
 */
void mettreEnLigne(int tableau3D[NB_LIGNES][NB_COLONNES])
{
    int i = 0, j = 0, m = 0;
    int monTableau[NB_ENTIERS];
    for (m = 0; m < NB_ENTIERS; m++)
    {
        for (i = 0; i < NB_LIGNES; i++)
        {
            for (j = 0; j < NB_COLONNES; j++)
            {
                monTableau[m] = tableau3D[i][j];
            }
        }
    }
    for (int m = 0; m < NB_ENTIERS; m++)
    {
        printf(" %d ", monTableau[m]);
    }
}