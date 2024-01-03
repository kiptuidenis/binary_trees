#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_leaf - Deletes an entire binary tree.
 *
 * @node: A pointer to the node of the tree to check.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
    {
        return (0);
    }

    if (node->left == NULL && node->right == NULL)
    {
        return (1);
    }
    return (0);
}