#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: tree height, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_branch;
	int right_branch;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left_branch = binary_tree_height(tree->left);
	right_branch = binary_tree_height(tree->right);

	if (left_branch < right_branch)
	{
		return (right_branch + 1);
	}
	else
	{
		return (left_branch + 1);
	}
}
