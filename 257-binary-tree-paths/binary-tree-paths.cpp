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
//  first go to node
// then push into path value
// then check leaf or not
// if leaf then push in final ans and return
// otherwise add arrow
// then call for left then right

class Solution {
public:
    void helper(TreeNode*root,vector<string>&ans,string s){
        if(root==NULL)return;

        // Add current node value
        s += to_string(root->val);
         
         //check leaf root or not
        if(root->left==NULL && root->right==NULL){
            ans.push_back(s);
            return;
        }
        
        //add if not leaf
        s += "->";

        helper(root->left,ans,s);
        helper(root->right,ans,s);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s="";
        helper(root,ans,s);
        return ans;
    }
};