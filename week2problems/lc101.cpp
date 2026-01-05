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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;
        return subtreeSymm(root->left, root->right);
    }
    bool subtreeSymm(TreeNode* leftree, TreeNode* rightree) {
        if (leftree == nullptr && rightree == nullptr) {
            return true;
        } else if (leftree == nullptr || rightree == nullptr) {
            return false;
        } else if (leftree->val == rightree->val) {
            return subtreeSymm(leftree->left, rightree->right) && subtreeSymm(leftree->right, rightree->left);
        } else {
            return false;
        }
    }
};