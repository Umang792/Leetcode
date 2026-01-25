class Solution {
public:
  void helper(vector<int>& num,int index,vector<vector<int>>&ans,vector<int>& temp){
       
        ans.push_back(temp);
        
        for(int i=index;i<num.size();i++){
            temp.push_back(num[i]);
            helper(num,i+1,ans,temp);
            temp.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans;
      vector<int>temp;
      int index=0;
      helper(nums,index,ans,temp);

      return ans;  
    }
};