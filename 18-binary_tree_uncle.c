#include "binary_trees.h"

/**
 *binary_tree_uncle- function that finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *Return: pointer to the uncle node or NULL if node is NULL or has no uncle
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;


	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;


	if (grandparent->left == NULL || grandparent->right == NULL)
		return (NULL);

	if (node->parent == grandparent->left)
		return (grandparent->right);
	else
		return (grandparent->left);
}
