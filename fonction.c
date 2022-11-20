//
// Created by Dell on 27/10/2022.
//
#include "fonction.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct File File;




/*void trieur_Nom()
{

    FILE* fichier = NULL;
    int ligne = 0;
    char ligneActuel[120];
    node_alpha *p = NULL, new;
    char *base = NULL, *forme_flechie = NULL,*type = NULL, *type_suite = NULL;

    fichier = fopen("dicotest.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            fgets(ligneActuel, 80, fichier);
            forme_flechie = strtok(ligneActuel,"\t");
            base = strtok(NULL,"\t");
            type = strtok(NULL,":");
            type_suite = strtok(NULL,":");

        } while (fgets(ligneActuel, 80, fichier) != NULL); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }
}*/


void tab_tree(p_node p, char *base, int index)
{

    if(base[index+1] != '\0')
    {
        for(int i = 0; i<40;i++)
        {
            if(p->child[i].car == base[index])
            {
                tab_tree(&p->child[i], base, index+1);
            }

        }
        for(int i = 0; i<40;i++)
        {
            if(p->child[i].car == 0)
            {
                p->child[i].car = base[index];
                tab_tree(&p->child[i], base, index+1);
            }

        }
         
    }

}


void trieur(p_node_alpha p, char *base, int index, char *forme_flechie, char *type_suite , char *type){

    if (base[index] == 'a') {
        if (p->a == NULL) {
            p->a = createnode(base[index]);
            trieur(p->a, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->a, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'b')
    {
        if (p->b == NULL)
        {
            p->b = createnode(base[index]);
            trieur(p->b, base, index + 1, forme_flechie, type_suite, type);
        }
        else {
            trieur(p->b, base, index + 1, forme_flechie, type_suite, type);
        }

    }
    else if (base[index] == 'c')
    {
        if (p->c == NULL)
        {
            p->c = createnode(base[index]);
            trieur(p->c, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->c, base, index + 1, forme_flechie, type_suite, type);

        }
    }
    else if (base[index] == 'd')
    {
        if (p->d == NULL)
        {
            p->d = createnode(base[index]);
            trieur(p->d, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->d, base, index + 1, forme_flechie, type_suite, type);

        }
    }
    else if (base[index] == 'e')
    {
        if (p->e == NULL)
        {
            p->e = createnode(base[index]);
            trieur(p->e, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->e, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'f')
    {
        if (p->f == NULL)
        {
            p->f = createnode(base[index]);
            trieur(p->f, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->f, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'g')
    {
        if (p->g == NULL)
        {
            p->g = createnode(base[index]);
            trieur(p->g, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->g, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'h')
    {
        if (p->h == NULL)
        {
            p->h = createnode(base[index]);
            trieur(p->h, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->h, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'i')
    {
        if (p->i == NULL)
        {
            p->i = createnode(base[index]);
            trieur(p->i, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->i, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'j')
    {
        if (p->j == NULL)
        {
            p->j = createnode(base[index]);
            trieur(p->j, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->j, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'k')
    {
        if (p->k == NULL)
        {
            p->k = createnode(base[index]);
            trieur(p->k, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->k, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'l'){
        if (p->l == NULL)
        {
            p->l = createnode(base[index]);
            trieur(p->l, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->l, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'm'){
        if (p->m == NULL)
        {
            p->m = createnode(base[index]);
            trieur(p->m, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->m, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'n'){
        if (p->n == NULL)
        {
            p->n = createnode(base[index]);
            trieur(p->n, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->n, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'o'){
        if (p->o == NULL)
        {
            p->o = createnode(base[index]);
            trieur(p->o, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->o, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'p'){
        if (p->p == NULL)
        {
            p->p = createnode(base[index]);
            trieur(p->p, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->p, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'q'){
        if (p->q == NULL)
        {
            p->q = createnode(base[index]);
            trieur(p->q, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->q, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'r'){
        if (p->r == NULL)
        {
            p->r = createnode(base[index]);
            trieur(p->r, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->r, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 's'){
        if (p->s == NULL)
        {
            p->s = createnode(base[index]);
            trieur(p->s, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->s, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 't'){
        if (p->t == NULL)
        {
            p->t = createnode(base[index]);
            trieur(p->t, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->t, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'u'){
        if (p->u == NULL)
        {
            p->u = createnode(base[index]);
            trieur(p->u, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->u, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'v'){
        if (p->v == NULL)
        {
            p->v = createnode(base[index]);
            trieur(p->v, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->v, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'w'){
        if (p->w == NULL)
        {
            p->w = createnode(base[index]);
            trieur(p->w, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->w, base, index + 1, forme_flechie, type_suite, type);
        }

    }
    else if (base[index] == 'x'){
        if (p->x == NULL)
        {
            p->x = createnode(base[index]);
            trieur(p->x, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->x, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'y'){
        if (p->y == NULL)
        {
            p->y = createnode(base[index]);
            trieur(p->y, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->y, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else if (base[index] == 'z'){
        if (p->z == NULL)
        {
            p->z = createnode(base[index]);
            trieur(p->z, base, index + 1, forme_flechie, type_suite, type);
        }
        else
        {
            trieur(p->z, base, index + 1, forme_flechie, type_suite, type);
        }
    }
    else{
        return;
    }
}
