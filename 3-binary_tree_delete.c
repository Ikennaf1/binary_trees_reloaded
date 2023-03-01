#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: The binary tree
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    if (tree->left == NULL && tree->right == NULL)
        return;

    if (tree->left != NULL) {
        tree = tree->left;
        binary_tree_delete(tree);
        free(tree);
        tree = NULL;
        return;
    }

    if (tree->right != NULL) {
        tree = tree->right;
        binary_tree_delete(tree);
        free(tree);
        tree = NULL;
        return;
    }

    free(tree->parent);
    tree->parent = NULL;
    return;
}