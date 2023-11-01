#include "binary_trees.h"

/**
 * binary_tree_uncle - short description
 *
 * Description: long description
 *
 * @node: argument_1 description
 *
 * Return: return description
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
