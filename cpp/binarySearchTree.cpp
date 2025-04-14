#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    // Node(int val) {
    //     data = val;
    //     left = nullptr;
    //     right = nullptr;
    // }

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinSearchTree{

    private:

        Node* root;

        Node* insertHelper(Node* node, int val){

            if(node == nullptr){
                return new Node(val);
            }

            if(val < node->data){
                node->left = insertHelper(node->left , val);
            }
            else if(val > node->data){
                node->right = insertHelper(node->right , val);
            }

            return node;
        }

        bool searchHelper(Node* node,int val){
            if(node == nullptr){
                return false;
            }
            if(node->data == val){
                return true;
            }
            if(val < node->data){
                return searchHelper(node->left, val);
            }
            else{
                return searchHelper(node->right, val);
            }
        }

        // bool searchHelper(Node* node, int val) {
        //     if (node == nullptr) return false;
        //     if (node->data == val) return true;
        //     if (val < node->data) return searchHelper(node->left, val);
        //     return searchHelper(node->right, val);
        // }

        Node* minHelper(Node* node) {
            while (node && node->left != nullptr) {
                node = node->left;
            }
            return node;
        }

        Node* maxHelper(Node* node) {
            while (node && node->right != nullptr) {
                node = node->right;
            }
            return node;
        }

        Node* deleteHelper(Node* node, int val) {

            if (node == nullptr) return node;
    
            if (val < node->data) {
                node->left = deleteHelper(node->left, val);
            } 
            else if (val > node->data) {
                node->right = deleteHelper(node->right, val);
            } 
            else {
                
                if (node->left == nullptr) {
                    Node* temp = node->right;
                    delete node;
                    return temp;
                } else if (node->right == nullptr) {
                    Node* temp = node->left;
                    delete node;
                    return temp;
                }
    
                
                Node* temp = minHelper(node->right);
                node->data = temp->data;
                node->right = deleteHelper(node->right, temp->data);
            }
            return node;
        }

    public:

        BinSearchTree() : root(nullptr){}

        void insert(int val){
            root = insertHelper(root, val);
        }

        bool search(int val) {
            return searchHelper(root, val);
        }

        int findMin() {
            Node* minNode = minHelper(root);
            if (minNode){
                return minNode->data;
            }
            cout << "Damnnn that tree's empty! it got no leaves hahaha " << endl;
            return 0;
            
        }
    
        int findMax() {
            Node* maxNode = maxHelper(root);
            if (maxNode){
                return maxNode->data;
            }

            cout << "Damnnn that tree's empty! it got no leaves hahaha " << endl;
            return 0;
        }

        void deleteNode(int val) {
            root = deleteHelper(root, val);
        }

};

int main() {

    BinSearchTree tree;
    int val;
    bool result;

    tree.insert(10);
    tree.insert(420);
    tree.insert(37);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);
    tree.insert(69);



    cout << "\nMin value: " << tree.findMin() << endl;
    cout << "Max value: " << tree.findMax() << endl;


    cout << "\nEnter value to search: ";
    cin >> val;
    result = tree.search(val);

    if (result){
        cout << val << " was found in the tree! Lets gooooo" << endl;
    } else {
        cout << val << " was not found in the tree! better luck next time kiddooooo" << endl;
    }

    cout << "\nEnter value to delete: ";
    cin >> val;

    tree.deleteNode(val);

    cout << "\nEnter value to search: ";
    cin >> val;
    result = tree.search(val);

    if (result){
        cout << val << " was found in the tree! Lets gooooo" << endl;
    } else {
        cout << val << " was not found in the tree! better luck next time kiddooooo" << endl;
    }


    return 0;
}