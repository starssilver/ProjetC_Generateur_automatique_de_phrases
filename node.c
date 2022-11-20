//
// Created by Dell on 27/10/2022.
//

#include "node.h"
#include <stdlib.h>
#include <stdio.h>


t_tree createEmptyTree()
{
    t_tree var;
    var.root = createnode(0);
    return var;
}


p_node_alpha createnode(char val)
{
    p_node_alpha n;
    n = (p_node_alpha)malloc(sizeof(node_alpha));
    n->car = val;
    n->a = n->b = n->c = n->d = n->e = n->f = n->g = n->h = n->i = n->j = n->k = n->l = n->m = n->n = n->o = n->p = n->q = n->r = n->s = n->t = n->u = n->v = n->w = n->x = n->y = n->z =NULL;
    return n;
}


