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

    // if (tree->left != NULL) {
    //     tree = tree->left;
    //     binary_tree_delete(tree);
    //     free(tree);
    //     if (tree->parent != NULL) {
    //         free(tree->parent);
    //         tree->parent = NULL;
    //     }
    //     tree = NULL;
    //     return;
    // }

    // if (tree->right != NULL) {
    //     tree = tree->right;
    //     binary_tree_delete(tree);
    //     free(tree);
    //     if (tree->parent != NULL) {
    //         free(tree->parent);
    //         tree->parent = NULL;
    //     }
    //     tree = NULL;
    //     return;
    // }

    // free(tree);
    // tree = NULL;
    // return;

    if (tree->left) {
        tree = tree->left;
        binary_tree_delete(tree);
        return;
    }
    if (tree->right) {
        tree = tree->right;
        binary_tree_delete(tree);
        return;
    }
    
    if (tree->left)
        free(tree->left);

    if (tree->right)
        free(tree->right);

    if (tree->parent)
        free(tree->parent);
    
    return;
}