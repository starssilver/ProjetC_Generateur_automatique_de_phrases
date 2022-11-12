//
// Created by Dell on 27/10/2022.
//
#include "fonction.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct File File;

t_tree createEmptyTree()
{
    t_tree var;
    var.root = NULL;
    return var;
}

void Nomtree(char Tab[],t_tree var)
{
    int i = 0,Lettre = 0;
    do
    {
        Lettre = Tab[i]; // On lit le caractère
        if (Lettre != 9)
        {

        }
        i++;
    } while (Lettre != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

}



void trieur_Nom(t_tree var)
{
    FILE* fichier = NULL;
    int caractereActuel = 0;
    char ligneActuel[120];
    node_alpha *p = NULL, new;
    //si tree est vide
    fichier = fopen("dicotest.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            fgets(ligneActuel, 80, fichier);
            caractereActuel = fgetc(fichier); // On lit le caractère
            if (caractereActuel != 78)      // ' ' = 9, 'N' = 78
            {
                printf("%c", caractereActuel);
                Nomtree(ligneActuel, var);
            }



        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }
}


void parcourir(t_tree var)
{

}

//printf("%c", caractereActuel); // On l'affiche