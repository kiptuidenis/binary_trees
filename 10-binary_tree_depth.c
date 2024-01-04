#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure a node
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    else
    {
        size_t left_height = 0, right_height = 0;

        if (tree->left != NULL)
        {
            left_height = 1 + binary_tree_depth(tree->left);
        }

        if (tree->right != NULL)
        {
            right_height = 1 + binary_tree_depth(tree->right);
        }

        if (left_height > right_height)
        {
            return left_height;
        } else 
        {
            return right_height;
        }
    }
}
