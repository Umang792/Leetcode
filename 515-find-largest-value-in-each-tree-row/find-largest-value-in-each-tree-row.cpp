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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)return ans;

        while(!q.empty()){
            int valuec=INT_MIN;
            int count=q.size();

            for(int i=0;i<count;i++){
                TreeNode*voe=q.front();
                q.pop();
                valuec=max(valuec,voe->val);

                if(voe->left){
                    q.push(voe->left);
                }
                if(voe->right){
                    q.push(voe->right);
                }
            }
            ans.push_back(valuec);
        }
        return ans;
    }
};