#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            deque<int> level;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                if (leftToRight) {
                    level.push_back(node->val);
                } else {
                    level.push_front(node->val);
                }

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(vector<int>(level.begin(), level.end()));
            leftToRight = !leftToRight;
        }

        return result;
    }
};

// Helper function to display the tree visually
void displayTree() {
    cout << "         3\n";
    cout << "       /   \\\n";
    cout << "      9     20\n";
    cout << "           / \\\n";
    cout << "         15   7\n";
}

int main() {
    // Display the tree visually
    displayTree();

    // Creating the binary tree as shown in the image
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Perform Zigzag Level Order Traversal
    Solution sol;
    vector<vector<int>> result = sol.zigzagLevelOrder(root);

    // Displaying the result
    cout << "\nZigzag Level Order Traversal: [";
    for (const auto& level : result) {
        cout << "[";
        for (int val : level) {
            cout << val << " ";
        }
        cout << "]";
    }
    cout << "]\n";

    return 0;
}
