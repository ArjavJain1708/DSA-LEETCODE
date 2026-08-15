/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    // pair.first = max money if we DO NOT rob this node
    // pair.second = max money if we DO rob this node
    pair<int, int> robHelper(TreeNode* root) {
        if (!root) {
            return {0, 0};
        }
        
        pair<int, int> left = robHelper(root->left);
        pair<int, int> right = robHelper(root->right);
        
        // If we don't rob current, we can choose to rob or skip children
        int notRob = max(left.first, left.second) + max(right.first, right.second);
        
        // If we rob current, we cannot rob direct children
        int rob = root->val + left.first + right.first;
        
        return {notRob, rob};
    }

public:
    int rob(TreeNode* root) {
        pair<int, int> result = robHelper(root);
        return max(result.first, result.second);
    }
};