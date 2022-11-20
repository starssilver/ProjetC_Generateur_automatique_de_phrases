#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

int main(int argc, char *argv[])
{
    t_tree Ver, Adj, Adv, Nom;
    Ver = createEmptyTree();
    Adj= createEmptyTree();
    Nom = createEmptyTree();
    Adv = createEmptyTree();

    FILE* fichier = NULL;
    char ligneActuel[120];

    char *base = NULL, *forme_flechie = NULL,*type = NULL, *type_suite = NULL;

    fichier = fopen("dicotest.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture ligne par ligne
        do
        {
            fgets(ligneActuel, 80, fichier);

            forme_flechie = strtok(ligneActuel,"\t");
            base = strtok(NULL,"\t");
            type = strtok(NULL,":");
            type_suite = strtok(NULL,"\n");

            if (strcmp(type, "Nom") == 0)
            {
                trieur(Nom.root, base, 0, forme_flechie, type_suite, type);
            }
            if (strcmp(type, "Ver") == 0)
            {
                trieur(Ver.root, base, 0, forme_flechie, type_suite, type);
                trieur(Ver.root, forme_flechie, 0, base, type_suite, type);
            }
            if (strcmp(type, "Adj") == 0)
            {
                trieur(Adj.root, base, 0, forme_flechie, type_suite, type);
                trieur(Ver.root, forme_flechie, 0, base, type_suite, type);
            }
            if (strcmp(type, "Adv") == 0)
            {
                trieur(Adv.root, base, 0, forme_flechie, type_suite, type);
            }

        } while (!feof(fichier)); // On continue tant que fgets n'est pas null (fin de fichier)

        fclose(fichier);

    }

    int choix;                     //menu
    printf("\nLe dictionnaire a bien ete parcouru et range.\n");
    menu:
    printf("Que voulez vous faire ?\n1. Voulez vous recherchez un mot?\n2. Extraire une forme de base au hasard\n3. Quitter le menu\n");
    scanf("%d", &choix);
    switch (choix) {
        case 1:
        {
            char mot[30];
            printf("Quel mot voulez vous choisir?\n");
            scanf(" %s ", &mot);

            //creer une phrase autour du mot
            break;

        }
        case 2:
        {
            char mot[30];
            //la fonction prend un mot au hasard

            //printf("le mot est %s", mot);
            //creer une phrase autour du mot
            break;
        }
        case 3:
        {
            printf("Au revoir et a bientot\n");
            break;
        }
        default:
            printf("Votre choix n'existe pas !\n");
            goto menu;
    }
    return 0;
}


