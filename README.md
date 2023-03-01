# The Binary Tree Data Structure
## Implementation of the Binary Tree Data Structure

### 0-binary_tree_node.c
A function that creates a binary tree node
* Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
* Where parent is a pointer to the parent node of the node to create
* And value is the value to put in the new node
* When created, a node does not have any child
* Your function must return a pointer to the new node, or NULL on failure