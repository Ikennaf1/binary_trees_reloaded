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

### 4-binary_tree_is_leaf.c
A function that checks if a node is a leaf
* Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
* Where node is a pointer to the node to check
* Your function must `return` 1 if node is a leaf, otherwise 0
* If node is `NULL`, `return` 0

### 5-binary_tree_is_root.c
A function that checks if a given node is a root
* Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
* Where node is a pointer to the node to check
* Your function must `return` 1 if node is a root, otherwise 0
* If node is `NULL`, `return` 0

### 6-binary_tree_preorder.c
A function that goes through a binary tree using pre-order traversal
* Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If tree or func is `NULL`, do nothing

### 7-binary_tree_inorder.c
A function that goes through a binary tree using in-order traversal
* Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If tree or func is `NULL`, do nothing

### 8-binary_tree_postorder.c
A function that goes through a binary tree using post-order traversal
* Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If tree or func is `NULL`, do nothing

### 9-binary_tree_height.c
A function that measures the height of a binary tree
* Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
* Where tree is a pointer to the root node of the tree to measure the height.
* If tree is `NULL`, your function must `return` 0

### 10-binary_tree_depth.c
A function that measures the depth of a node in a binary tree
* Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
* Where tree is a pointer to the node to measure the depth
* If tree is `NULL`, your function must `return` 0
