#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }

    if (tree->left == NULL && tree->right == NULL)
    {
        free(tree->left);
        free(tree->right);
        free(tree->parent);
        free(tree);
        return;
    }

    else
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
    }
}