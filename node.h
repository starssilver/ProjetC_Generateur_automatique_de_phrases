//
// Created by Dell on 27/10/2022.
//

#ifndef PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
#define PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H



struct s_node_alpha
{
    char car;
    struct s_node_alpha   *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o, *p, *q, *r, *s, *t, *u, *v, *w, *x, *y, *z;
    int depth;
};
typedef struct s_node_alpha node_alpha;


typedef struct s_tree
{
    node_alpha *root;
} t_tree, *p_tree;

node_alpha nodecreate(int val);



#endif //PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
