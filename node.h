//
// Created by Dell on 27/10/2022.
//

#ifndef PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
#define PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
#include <stdlib.h>

struct s_node_alpha
{
    char car;
    struct s_node_alpha *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o, *p, *q, *r, *s, *t, *u, *v, *w, *x, *y, *z;
};
typedef struct s_node_alpha node_alpha, *p_node_alpha;


typedef struct s_tree
{
    p_node_alpha root;
} t_tree, *p_tree;



t_tree createEmptyTree();

p_node_alpha createnode(char val);



#endif //PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
