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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, nums.size()-1);
    }
    TreeNode* buildBST(vector<int> &nums, int low, int high) {
        if (low > high)
            return nullptr;
        int mid = low + ((high-low)/2);
        TreeNode* tree = new TreeNode(nums[mid]);
        tree->left = buildBST(nums, low, mid-1);
        tree->right = buildBST(nums, mid+1, high);
        return tree;
    }
};