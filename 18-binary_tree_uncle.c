#include "binary_trees.h"

/**
 * binary_tree_uncle - Locates the uncle of a node.
 * @node: A pointer to the node for which to find the uncle.
 *
 * Return: A pointer to the uncle node if found, NULL otherwise.
 *         Returns NULL if the node is NULL, the parent is NULL, or there's no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);

    return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Locates the sibling of a node.
 * @node: A pointer to the node for which to find the sibling.
 *
 * Return: A pointer to the sibling node if found, NULL otherwise.
 *         Returns NULL if the node is NULL, the parent is NULL, or there's no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);

    return (node == node->parent->left ? node->parent->right : node->parent->left);
}
