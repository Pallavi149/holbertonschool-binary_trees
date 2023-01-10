#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if not full tree, return 1 if is full tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right != NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		return (1);
	}

	return (0);
}
