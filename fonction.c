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
    char ligne[120];
    node_alpha *p = NULL, new;
    //si tree est vide
    fichier = fopen("dicotest.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            while(fgets(ligne, 80, fichier) != NULL)
            {
                fgets(ligne, 80, fichier); // On lit la ligne
                printf("%s", ligne);
            }
            caractereActuel = fgetc(fichier); // On lit le caractère
            new = nodecreate(caractereActuel);
            //p->a->car = new.car;
            //p = p->a;

            //printf("%c", new.car);



        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }
}

int lireligneNom(char ligne[])
{
    //print
    //return 1;
}

void parcourir(t_tree var)
{

}

//printf("%c", caractereActuel); // On l'affiche