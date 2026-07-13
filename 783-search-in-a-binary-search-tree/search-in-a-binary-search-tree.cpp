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
public:
 void helper(TreeNode* root, int val,TreeNode** res){
     if(root==NULL){
            return ;
        }

        if(val<root->val){
           helper(root->left,val,res);

        }
        else if(val>root->val){
           helper(root->right,val,res);
        }
        else{
            *res=root;
            return;
        }
 }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* res = NULL;
       helper(root,val,&res);
       return res;
    }
};