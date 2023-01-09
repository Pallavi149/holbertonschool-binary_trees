#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: returns a pointer to the new node, or NULL on failure or if parent
 *is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node;
	binary_tree_t *new_node = binary_tree_node(parent, value);


	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}

	else
	{
		old_node = parent->left;
		new_node->left = old_node;
		parent->left = new_node;
		old_node->parent = new_node;
	}

	return (new_node);
}
