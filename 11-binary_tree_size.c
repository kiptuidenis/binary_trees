#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to traverse.
 *
 * Return: Size of tree. 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left_height = 0, right_height = 0;

		left_height = binary_tree_size(tree->left);
		right_height = binary_tree_size(tree->right);

		return (left_height + right_height + 1);
	}
}
