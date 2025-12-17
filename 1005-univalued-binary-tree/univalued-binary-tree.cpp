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
    bool helper(TreeNode*root,int temp){
        if(root==NULL){
            return true;
        }
        if(root->val!=temp){
            return false;

        }
       bool h1= helper(root->left,temp);
       bool h2= helper(root->right,temp);
        return h1&&h2;
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int temp=root->val;
        bool umg=helper(root,temp);
        return umg;
        
    }
};