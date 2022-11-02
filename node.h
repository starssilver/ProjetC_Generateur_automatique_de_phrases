//
// Created by Dell on 27/10/2022.
//


struct s_node
{
    int value;
    struct s_node   *left, *right;
    int depth;
};

typedef struct s_node t_node, *p_node;

typedef struct s_tree
{
    p_node root;
} t_tree, *p_tree;

p_node createNode(int val);

#ifndef PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
#define PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H

#endif //PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
