//
// Created by Dell on 27/10/2022.
//

#include "node.h"
#include <stdlib.h>
#include <stdio.h>

node_alpha nodecreate(int val)
{
    node_alpha new;
    new.car = val;
    return new;
}