#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        return getHeight(root) != -1;
    }
    int getHeight (TreeNode* node) {
        if (node == nullptr) return 0;
        int leftH = getHeight(node->left);
        if (leftH == -1) return -1;
        int rightH = getHeight(node->right);
        if (rightH == -1) return -1;
        if (abs(leftH - rightH) > 1) return -1; //imbalance found
        //now balanced
        return 1 + max(leftH, rightH); //checks for deepest node
    }
};