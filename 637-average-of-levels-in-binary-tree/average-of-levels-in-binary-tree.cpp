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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        if(root==NULL) return ans;
        q.push(root);

        while(!q.empty()){
            long long sum=0;
            int count=q.size();

            for(int i=0;i<count;i++){

                TreeNode*voe=q.front();
                q.pop();
                sum=sum+(voe->val);

                if(voe->left){
                    q.push(voe->left);
                }
                if(voe->right){
                    q.push(voe->right);
                }
            }
            double avg = (double)sum / count;//important rem it
            ans.push_back(avg);

        }
        return ans;
        
    }
};