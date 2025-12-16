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
    int helper(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL){
            return 1+helper(root->right);//rem it
        }
        if(root->right==NULL){
            return 1+helper(root->left);//rem it
        }
        
        int h1=helper(root->left);
        int h2=helper(root->right);
        return 1+min(h1,h2);
    }
    int minDepth(TreeNode* root) {

        int umg=helper(root);
        return umg;
        
    }
};