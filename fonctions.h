//
// Created by Marie-Sophie Flament on 06/10/2021.
//

#ifndef TP5_FONCTIONS_H
#define TP5_FONCTIONS_H
#include "structures.h"
nombreRationnel saisieNb(void);
void affichageNb(nombreRationnel nb);
void multiplication (nombreRationnel nb, nombreRationnel nb1, nombreRationnel nb2);
void addition(nombreRationnel nb, nombreRationnel nb1, nombreRationnel nb2);
int pgcd (nombreRationnel nb);
nombreRationnel simplification(nombreRationnel nb);
#define NB_LIGNES 3
#define NB_COLONNES 4
#define NB_ENTIERS 12
void mettreEnLigne(int tableau3D[NB_LIGNES][NB_COLONNES]);
#endif //TP5_FONCTIONS_H
