#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: new_node, if parent is NULL return NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node;
	binary_tree_t *new_node = binary_tree_node(parent, value);


	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = new_node;
	}

	else
	{
		old_node = parent->right;
		new_node->right = old_node;
		parent->right = new_node;
		old_node->parent = new_node;
	}
	return (new_node);
}
