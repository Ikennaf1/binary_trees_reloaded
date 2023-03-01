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
        // free(tree);
        // if (tree->parent != NULL) {
        //     free(tree->parent);
        //     tree->parent = NULL;
        // }
        // tree = NULL;
        return;
    }

    if (tree->right != NULL) {
        tree = tree->right;
        binary_tree_delete(tree);
        // free(tree);
        // if (tree->parent != NULL) {
        //     free(tree->parent);
        //     tree->parent = NULL;
        // }
        // tree = NULL;
        return;
    }

    if (tree->left) {
        free(tree->left);
        tree->left = NULL;
    }
    if (tree->parent->left) {
        free(tree->parent->left);
        tree->parent->left = NULL;
    }
    
    if (tree->right) {
        free(tree->right);
        tree->right = NULL;
    }
    if (tree->parent->right) {
        free(tree->parent->right);
        tree->parent->right = NULL;
    }
    
    if (tree->parent) {
        free(tree->parent);
        tree->parent = NULL;
    }
    if (tree->parent->parent) {
        free(tree->parent->parent);
        tree->parent->parent = NULL;
    }
    
    if (tree) {
        free(tree);
        tree = NULL;
    }

    return;
}