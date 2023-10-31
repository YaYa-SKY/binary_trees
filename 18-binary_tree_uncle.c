#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, NULL if not found or if node is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

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
