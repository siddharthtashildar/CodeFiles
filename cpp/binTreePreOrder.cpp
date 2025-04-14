#include <iostream>
using namespace std;
#include <queue>

// Node 
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

//root -> left -> right
void preorderTraversal(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " ";  
    preorderTraversal(root->left); 
    preorderTraversal(root->right); 
}

//left -> right -> root
void postorderTraversal(Node* root) {
    if (root == nullptr) return;

    postorderTraversal(root->left);   
    postorderTraversal(root->right);  
    cout << root->data << " ";        
}

//left -> root -> right
void inorderTraversal(Node* root) {
    if (root == nullptr) return;

    inorderTraversal(root->left);   
    cout << root->data << " ";      
    inorderTraversal(root->right);  
}


void levelOrderTraversal(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != nullptr) q.push(current->left);
        if (current->right != nullptr) q.push(current->right);
    }
}

void displayTree() {
    cout << "         1\n";
    cout << "       /   \\\n";
    cout << "      2     3\n";
    cout << "     / \\   / \\\n";
    cout << "    4   5 6   7\n";
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << endl;
    cout << endl;
    cout << "Here is The Binary Treeeeeeee: " << endl;
    cout << endl;
    cout << endl;

    displayTree();

    cout << endl;
    cout << endl;
    cout << "Here is The flow of all Transversal in Binary Treeeeeeee: " << endl;
    cout << endl;
    cout << endl;

    cout << "Preorder Traversal:        ";
    preorderTraversal(root);
    cout << endl;



    cout << "Postorder Traversal:       ";
    postorderTraversal(root);
    cout << endl;


    cout << "Inorder Traversal:         ";
    inorderTraversal(root);
    cout << endl;


    cout << "Level Order Traversal:     ";
    levelOrderTraversal(root);
    cout << endl;

    cout << endl;
    cout << "LETS GOOOOOO! ALl hail Python" << endl;
    return 0;
}