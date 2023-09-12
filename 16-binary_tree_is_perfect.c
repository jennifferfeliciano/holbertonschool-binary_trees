#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node
 * Return: 1 if perfect 0 is not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);

    if (left_height == right_height) {
        if (tree->left == NULL && tree->right == NULL)
            return 1;
        else if (tree->left != NULL && tree->right != NULL)
            return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
    }

    return 0;
}
