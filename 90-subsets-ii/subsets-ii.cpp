class Solution {
public: 
    void helper(vector<vector<int>>&finalans,vector<int>&temp,int index,vector<int>&nums){
      
      finalans.push_back(temp);//currently temp blank so blank subset pushed into final ans
        

      unordered_set<int>s;
      for(int i=index;i<nums.size();i++){
        if(s.count(nums[i])){
            continue;
        }
        s.insert(nums[i]);
        temp.push_back(nums[i]);
        helper(finalans,temp,i+1,nums);
        temp.pop_back();
      }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(), nums.end());  
        vector<vector<int>>finalans;
        vector<int>temp;
        int index=0;
        helper(finalans,temp,index,nums);
        return finalans;
    }
};