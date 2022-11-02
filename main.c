#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int main(int argc, char *argv[])
{


    t_tree Ver, Adj, Adv, Nom;
    Ver = createEmptyTree();
    Adj= createEmptyTree();
    Nom = createEmptyTree();
    Adv = createEmptyTree();

    trieur_Nom(Nom);


    return 0;
}
