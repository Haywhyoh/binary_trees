#include "binary_trees.h"
/**
 * binary_tree_node - create a new binary tree node
 * @parent: the parent node
 * @value: the value to be stored
 *
 * Return:a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	new_node->parent = parent;
	new_noe->n = value;
	new_node = NULL;
	new_node->right = NULL;
	return (new_node);
	free(new_node);
}
