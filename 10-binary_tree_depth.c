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
    size_t depth = 0;

    if (tree == NULL) {
        return 0; /* If the node is NULL, its depth is 0 */
    }

    /* Traverse upward to the root, incrementing depth for each level */
    while (tree->parent != NULL) {
        depth++;
        tree = tree->parent;
    }

    return depth;
}
