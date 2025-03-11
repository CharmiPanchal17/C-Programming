#include <stdio.h>
#include <stdlib.h>

// Structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node in BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) return createNode(value);
    if (value < root->data) 
        root->left = insert(root->left, value);
    else 
        root->right = insert(root->right, value);
    return root;
}

// Inorder Traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    int values[] = {5, 6, 3, 7, 8, 4, 2};
    struct Node* root = NULL;

    // Insert values into BST
    for (int i = 0; i < 7; i++) {
        root = insert(root, values[i]);
    }

    printf("Inorder Traversal of BST: ");
    inorder(root); // Should print: 2 3 4 5 6 7 8
    return 0;
}
