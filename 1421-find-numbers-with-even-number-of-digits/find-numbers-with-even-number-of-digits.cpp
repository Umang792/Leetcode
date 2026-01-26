class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            string s=to_string(nums[i]);
            int length=s.length();
            if(length%2==0){
                count++;
            }
        }
        return count;
    }
};