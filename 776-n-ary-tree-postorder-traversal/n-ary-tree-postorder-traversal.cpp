/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void helper(Node*root,vector<int>&ans){
        if(root==NULL)return;
        
        for(Node*umg:root->children){
            helper(umg,ans);
        }
        
         ans.push_back(root->val);//node
    }
    vector<int> postorder(Node* root) {
       vector<int>ans;
       if(root==NULL)return ans;
       helper(root,ans);
       return ans;  
    }
};


