#include "binary_trees.h"
#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_full -Checks if binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

/* If the node has no children, it's a leaf node and the tree is full */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

/* If the node has both children, recursively check left and right subtrees */
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}
/* If any node has only one child, the tree is not full */
	return (0);
}
