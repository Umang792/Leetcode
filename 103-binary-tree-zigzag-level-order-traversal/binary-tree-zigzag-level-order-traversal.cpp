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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>final;
        if(root==NULL)return final;
        int level=0;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            level++;
            int count=q.size();
            vector<int>ans;

            for(int i=0;i<count;i++){
                TreeNode*voe=q.front();
                q.pop();
                ans.push_back(voe->val);

                if(voe->left){
                    q.push(voe->left);
                }
                if(voe->right){
                    q.push(voe->right);
                }
            }
            if(level%2==0){
                reverse(ans.begin(),ans.end());
            }
            final.push_back(ans);

        }
        return final;
    }
};