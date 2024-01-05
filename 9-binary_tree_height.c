#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
    {
        return 0;
    }
    else
    {
        size_t left_height = 0, right_height = 0;

        left_height = 1 + binary_tree_height(tree->left);
        right_height = 1 + binary_tree_height(tree->right);

        if (left_height > right_height)
        {
            return left_height;
        } else 
        {
            return right_height;
        }
    }
}
