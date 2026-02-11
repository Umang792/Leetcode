class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>finalans;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)return finalans;


        while(!q.empty())
        { 
            vector<int>ans;
            int count=q.size();

            for(int i=0;i<count;i++)
            {
                
            TreeNode*nodem=q.front();
            q.pop();
            ans.push_back(nodem->val);

             if(nodem->left)
             {
                q.push(nodem->left);
             }
            if(nodem->right)
            {
                q.push(nodem->right);
            }
            
            }

            finalans.push_back(ans);
        }
    
    return finalans;
        
    }
};
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
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {

//         vector<vector<int>> ans;
//         if(root == NULL) return ans;

//         vector<int> level;
//         queue<TreeNode*> q;

//         q.push(root);
//         q.push(NULL);   // level marker

//         while(!q.empty()) {
//             TreeNode* valu = q.front();
//             q.pop();

//             if(valu == NULL) {
//                 ans.push_back(level);
//                 level.clear();        // 🔹 reset for next level

//                 if(!q.empty())        // 🔹 push marker for next level
//                     q.push(NULL);
//             }
//             else {
//                 level.push_back(valu->val);   // 🔹 add value//instead of else condition we can use continue   in last of if condition

//                 if(valu->left != NULL)
//                     q.push(valu->left);

//                 if(valu->right != NULL)
//                     q.push(valu->right);
//             }
//         }
//         return ans;
//     }
// };
