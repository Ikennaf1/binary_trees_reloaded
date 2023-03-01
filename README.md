# The Binary Tree Data Structure
## Implementation of the Binary Tree Data Structure

### 0-binary_tree_node.c
A function that creates a binary tree node
* Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
* Where parent is a pointer to the parent node of the node to create
* And value is the value to put in the new node
* When created, a node does not have any child
* Your function must `return` a pointer to the new node, or `NULL` on failure

### 1-binary_tree_insert_left.c
A function that inserts a value as the left-child of another node
* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
* Where parent is a pointer to the node to insert the left-child in
* And value is the value to store in the new node
* Your function must `return` a pointer to the created node, or `NULL` on failure or if parent is `NULL`
* If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### 2-binary_tree_insert_right.c
A function that inserts a value as the left-child of another node
* Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
* Where parent is a pointer to the node to insert the right-child in
* And value is the value to store in the new node
* Your function must `return` a pointer to the created node, or `NULL` on failure or if parent is `NULL`
* If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

### 3-binary_tree_delete.c
A function that deletes an entire binary tree
* Prototype: `void binary_tree_delete(binary_tree_t *tree);`
* Where tree is a pointer to the root node of the tree to delete
* If tree is `NULL`, do nothing