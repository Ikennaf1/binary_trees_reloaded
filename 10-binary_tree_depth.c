#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Given binary tree
 * Return: `int` Depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    // size_t left = 0, right = 0;
    size_t height = 0;
    if (tree) {
        
        if (tree->parent)
            height = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

        return (height);
    } else {
        return (0);
    }
}