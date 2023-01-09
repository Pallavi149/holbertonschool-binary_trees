#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire tree
 * @tree: is a pointer to the root node of the tree to delete
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	/* first delete both subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* then delete the node */
	printf("\n Deleting node: %d", tree->n);
	free(tree);
}
