//
// Created by Dell on 27/10/2022.
//
#include "fonction.h"
#include <stdlib.h>
#include <stdio.h>



t_tree createEmptyTree()
{
    t_tree var;
    var.root = NULL;
    return var;
}


void trieur_Nom(t_tree var)
{
    FILE* fichier = NULL;
    int caractereActuel = 0;

    fichier = fopen("dicotest.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {

            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche

        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }
}


void parcourir(t_tree var)
{

}