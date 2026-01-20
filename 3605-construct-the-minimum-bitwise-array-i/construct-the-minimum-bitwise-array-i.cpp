class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        bool umg;
        for(int i=0;i<n;i++){
             umg=false;
            for(int j=0;j<nums[i];j++){
                if((j|j+1)==nums[i]){
                    ans.push_back(j);
                    umg=true;
                    break;
                }
           
            }
            if(!umg){
                    ans.push_back(-1);
                }
           
        }
        return ans;
    
    }
};