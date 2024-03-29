#include "binary_trees.h"
#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_uncle - Finds uncle of a node.
 *
 * @node: A pointer to the node to find uncle.
 *
 * Return: Pointer to uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}


/**
 * binary_tree_sibling - Finds sibling of a node.
 *
 * @node: A pointer to the node to find sibling.
 *
 * Return: Pointer to sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
