class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        bool umg=false;
        for(auto it:mp){
            if(it.second>1){
                umg=true;
            }
        }
        return umg;
    }
};