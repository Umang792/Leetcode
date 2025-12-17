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
    int helper(TreeNode*root,int&sum){
        if(root==NULL){
            return 0;
        }
        if(root->left!=NULL&&root->left->left==NULL&&root->left->right==NULL)
        {
            sum=sum+root->left->val;
            }

        helper(root->left,sum);   
        helper(root->right,sum);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        int umg=helper(root,sum);
        return umg;
    }
};