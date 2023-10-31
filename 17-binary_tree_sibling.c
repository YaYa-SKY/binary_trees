#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, NULL if not found or if node is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node == node->parent->left ? node->parent->right : node->parent->left);
}
