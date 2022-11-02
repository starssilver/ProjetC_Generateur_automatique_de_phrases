#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int main(int argc, char *argv[])
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

    t_tree Ver,Adj, Adv, Nom;
    Ver = createEmptyTree();
    Adj= createEmptyTree();
    Nom = createEmptyTree();
    Adv = createEmptyTree();

    return 0;
}
