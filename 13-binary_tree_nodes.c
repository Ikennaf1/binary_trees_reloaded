#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: The given binary tree
 * Return: `int` Number of nodes with child(ren)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count = 0;

    if (tree) {
        if (tree->left || tree->right) {
            count += 1;
            count += binary_tree_nodes(tree->left);
            count += binary_tree_nodes(tree->right);
        }
        return (count);
    } else {
        return (0);
    }
}
