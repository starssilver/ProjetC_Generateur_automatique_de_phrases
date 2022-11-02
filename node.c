//
// Created by Dell on 27/10/2022.
//

#include "node.h"
#include <stdlib.h>


p_node createNode(char val)
{
    p_node nouv;

    nouv = (p_node)malloc(sizeof(t_node));
    nouv->value = val;
    nouv->left = nouv->right = NULL;

    return nouv;
}