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
    vector<int> findMode(TreeNode* root) {
    if (!root) return {};
    vector<int> arr, modes;
    inOT(arr, root);
    int highestCount = 0;
    int currentCount = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (i > 0 && arr[i] == arr[i-1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }
        if (currentCount > highestCount) {
            highestCount = currentCount;
            modes.clear();
            modes.push_back(arr[i]);
        } else if (currentCount == highestCount) {
            modes.push_back(arr[i]);
        }
    }
    return modes;
}
    void inOT(vector<int> &nums, TreeNode* node) {
        if (node == nullptr) return;
        inOT(nums, node->left);
        nums.push_back(node->val);
        inOT(nums, node->right);
    }
};