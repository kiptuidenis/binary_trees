#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_node;

    if (parent == NULL)
    {
        return (NULL);
    }

    left_node = binary_tree_node(parent, value);
    if (left_node == NULL)
    {
        return (NULL);
    }

    if (parent->left == NULL)
    {
        parent->left = left_node;
        left_node->parent = parent;
        return (left_node);
    }

    left_node->parent = parent;
    left_node->left = parent->left;
    parent->left->parent = left_node;
    parent->left = left_node;

    return (left_node);
}