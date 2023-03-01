#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: The binary tree
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
    /*binary_tree_t *tree_left = NULL;
    binary_tree_t *tree_right = NULL;
    binary_tree_t *tree_parent = NULL;*/

    if (tree == NULL)
        return;

    if (tree->left) {
        tree = tree->left;
        binary_tree_delete(tree);
    }

    if (tree->right) {
        tree = tree->right;
        binary_tree_delete(tree);
    }

    free(tree->n);
    free(tree);
    tree = NULL;
}