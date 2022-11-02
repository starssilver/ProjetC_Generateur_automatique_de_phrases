//
// Created by Dell on 27/10/2022.
//


struct s_node
{
    char value;
    struct s_node   *left, *right;
    int depth;
};

struct s_node_alpha
{
    char value;
    struct s_node   *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o, *p, *q, *r, *s, *t, *u, *v, *w, *x, *y, *z;
    int depth;
};
typedef struct s_node_alpha node_alpha;
typedef struct s_node t_node, *p_node;

typedef struct s_tree
{
    void *root;
} t_tree, *p_tree;

p_node createNode(char val);

#ifndef PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
#define PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H

#endif //PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
