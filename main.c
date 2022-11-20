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
            }
            if (strcmp(type, "Adj") == 0)
            {
                trieur(Adj.root, base, 0, forme_flechie, type_suite, type);
            }
            if (strcmp(type, "Adv") == 0)
            {
                trieur(Adv.root, base, 0, forme_flechie, type_suite, type);
            }

        } while (fgets(ligneActuel, 80, fichier) != NULL); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);

    }
    return 0;
}
