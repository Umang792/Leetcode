class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int umg=0;
        for(auto it:mp){
            if(it.second==n){
                umg=it.first;
            }
        }
        return umg;
    }
};