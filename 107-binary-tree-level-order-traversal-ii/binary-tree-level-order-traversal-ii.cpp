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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>final;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)return final;

        while(!q.empty()){
            vector<int>ans;
            int count=q.size();

            for(int i=0;i<count;i++){
                TreeNode*vok=q.front();
                q.pop();
                ans.push_back(vok->val);

                if(vok->left){
                    q.push(vok->left);
                }
                if(vok->right){
                    q.push(vok->right);
                }
            }
            final.push_back(ans);
        }
        reverse(final.begin(),final.end());
        return final;

    }
};