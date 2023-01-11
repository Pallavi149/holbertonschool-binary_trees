#include "binary_trees.h"

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of a tree
 * Return: An int representing the ballance of the tree, 0 if the tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

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
