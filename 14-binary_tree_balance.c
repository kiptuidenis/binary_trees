#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to traverse.
 *
 * Return: Balance factor of tree. 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
    {
        return (0);
    }

    left_height = (int)binary_tree_height(tree->left);
    right_height = (int)binary_tree_height(tree->right);

    return (left_height - right_height);

}


/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
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
            left_height = 1 + binary_tree_height(tree->left);
        }

        if (tree->right != NULL)
        {
            right_height = 1 + binary_tree_height(tree->right);
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
