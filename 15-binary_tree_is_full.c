#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if not full tree, return 1 if is full tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *l;
	binary_tree_t *r;

	if (tree == NULL)
	{
		return (0);
	}

	l = tree->left;
	r = tree->right;

	if (tree->left != NULL && tree->right != NULL)
	{
		return (1 & binary_tree_is_full(l) & binary_tree_is_full(r));
	}

	else if (tree->left != NULL && tree->right == NULL)
	{
		return (0);
	}

	else if (tree->left == NULL && tree->right != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
