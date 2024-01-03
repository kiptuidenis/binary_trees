#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as
 *                            the right-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = right_node;
		right_node->parent = parent;
		return (right_node);
	}

	right_node->parent = parent;
	right_node->right = parent->right;
	parent->right->parent = right_node;
	parent->right = right_node;

	return (right_node);
}
