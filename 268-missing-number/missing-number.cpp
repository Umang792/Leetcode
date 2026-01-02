class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()+1;
        int sum=n*(n-1)/2;

        int sum1=0;
        for(int i=0;i<n-1;i++){
            sum1=sum1+nums[i];
        }
        int ans=sum-sum1;
        return ans;
    }
};