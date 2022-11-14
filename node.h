//
// Created by Dell on 27/10/2022.
//

#ifndef PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
#define PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
#include <stdlib.h>

struct s_node_alpha
{
    char car;
    struct s_node_alpha *child;
};
typedef struct s_node_alpha node_alpha, *p_node_alpha;


typedef struct s_tree
{
    node_alpha *root;
} t_tree, *p_tree;



t_tree createEmptyTree();

node_alpha createnode(char val);



#endif //PROJETC_GENERATEUR_AUTOMATIQUE_DE_PHRASES_NODE_H
