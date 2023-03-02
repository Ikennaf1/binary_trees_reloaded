#include "binary_trees.h"

/**
 * binary_tree_inorder - A function that goes through a binary tree in-order traversal
 * @tree: The given binary tree
 * @func: The fuction to run for each node
 * Return: Void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
