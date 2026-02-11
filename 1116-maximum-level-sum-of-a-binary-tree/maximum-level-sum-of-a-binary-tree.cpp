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
    int maxLevelSum(TreeNode* root) {
       queue<TreeNode*>q;
       int ans=0;
       int level=0;
       int maxsum = INT_MIN;  
       q.push(root);
       if(root==NULL) return ans;

       while(!q.empty()){
        int count= q.size();
        int sum=0;
        level++;

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
         
         if(sum>maxsum){
            maxsum=sum;
            ans=level;

         }
       }
       return ans;
    }
};