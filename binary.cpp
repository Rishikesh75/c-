#include <iostream>
#include <queue>

using namespace std;

struct node {
    int number;
    struct node* left;
    struct node* right;
};

// Function to create a new node
struct node* create_node(int n) {
    struct node* temp = new node;
    temp->number = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Function to insert a new node in the binary tree
struct node* insert_node(struct node* root, int n) 
{
    if (root == NULL) {
        root = create_node(n);
        return root;
    }

    queue<struct node*> q;
    q.push(root);

    while (!q.empty()) {
        struct node* temp = q.front();
        q.pop();

        // Insert node as the left child of the parent node
        if (temp->left == NULL) {
            temp->left = create_node(n);
            break;
        } 
        else 
        {
            q.push(temp->left);
        }

        // Insert node as the right child of the parent node
        if (temp->right == NULL) {
            temp->right = create_node(n);
            break;
        } else {
            q.push(temp->right);
        }
    }
    return root;
}

// Function to print the binary tree in level order
void print_level_order(struct node* root) {
    if (root == NULL) return;

    queue<struct node*> q;
    q.push(root);

    while (!q.empty()) {
        struct node* temp = q.front();
        q.pop();

        cout << temp->number << " ";

        if (temp->left != NULL) {
            q.push(temp->left);
        }

        if (temp->right != NULL) {
            q.push(temp->right);
        }
    }
}

int main() {
    struct node* root = NULL;

    root = insert_node(root, 1);
    root = insert_node(root, 2);
    root = insert_node(root, 3);
    root = insert_node(root, 4);
    root = insert_node(root, 5);

    cout << "Level order traversal of binary tree is: ";
    print_level_order(root);

    return 0;
}
