class Solution {
public:

    void helper(vector<int>& nums,vector<vector<int>>&ans,int index){
       
     //Base case: one permutation completed
     //important base case..a valid permutation is formed ONLY at the leaf node.
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int>st;

        for(int i=index;i<nums.size();i++){
            if(st.count(nums[i]))continue;//important
            st.insert(nums[i]);//important
            swap(nums[i],nums[index]);
            helper(nums,ans,index+1);
            swap(nums[i],nums[index]);
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
          vector<vector<int>> ans;
          if(nums.size()==1){
            ans.push_back(nums);
            return ans;
          }
          helper(nums,ans,0);
          return ans;
    }
};