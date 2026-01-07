#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
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
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX;
        vector<int> sortedArr;
        inOT(sortedArr, root);
        for (int i = 1; i < sortedArr.size(); i++) {
            int diff = abs(sortedArr[i] - sortedArr[i-1]);
            if (diff < minDiff) minDiff = diff;
        }
        return minDiff;
    }
    void inOT(vector<int> &nums, TreeNode* root) {
        if (root == nullptr) return;
        inOT(nums, root->left);
        nums.push_back(root->val);
        inOT(nums, root->right);
    }
};