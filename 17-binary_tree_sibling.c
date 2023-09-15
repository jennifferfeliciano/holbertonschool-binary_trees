#include "binary_trees.h"

/**
 *binary_tree_sibling- function that finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 *Return: pointer to the sibling node or NULL if node has not sibling
 *or if either the node or its parent is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
