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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postOT(result, root);
        return result;
    }
    void postOT(vector<int> &nums, TreeNode* root) {
        if (root == nullptr) return;
        postOT(nums, root->left);
        postOT(nums, root->right);
        nums.push_back(root->val);
    }
};