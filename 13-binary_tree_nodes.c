#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to traverse.
 *
 * Return: Size of tree. 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count = 0;

	 if (tree == NULL)
    {
        return (0);
    }


    if (tree->left != NULL || tree->right != NULL) 
    {
        count = 1;
    }

    count += binary_tree_nodes(tree->left);
    count += binary_tree_nodes(tree->right);

    return (count);
}
