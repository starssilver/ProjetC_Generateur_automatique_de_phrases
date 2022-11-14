//
// Created by Dell on 27/10/2022.
//
#include "fonction.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct File File;




void Nomtree(p_node_alpha p, char *base, int index)
{
    p_node_alpha temp;
    if(base[index+1] != '\0')
    {
        for(int i = 0; i<26;i++)
        {
            if(p->child[i].car == base[index])
            {
                Nomtree(p->child, base, index+1);
            }
            else
            {
                p->child[i] = createnode(base[index]);
                Nomtree(p->child, base,index+1);
            }
        }
    }
}



void trieur_Nom(t_tree var)
{
    FILE* fichier = NULL;
    int ligne;
    char ligneActuel[120];
    node_alpha *p = NULL, new;
    char *base = NULL, *forme_flechie = NULL,*type = NULL;
    //si tree est vide
    fichier = fopen("dicotest.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            fgets(ligneActuel, 80, fichier);
            forme_flechie = strtok(ligneActuel,"\t");
            base = strtok(NULL,"\t");
            type = strtok(NULL,"\n");
            //sscanf(fgets(ligneActuel, 80, fichier),"%s\t%s\t%s\n", forme_flechie, base, type);
            Nomtree(var.root, base, 0);


        } while (fgets(ligneActuel, 80, fichier) != NULL); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }
}
