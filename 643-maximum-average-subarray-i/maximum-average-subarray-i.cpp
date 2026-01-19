class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     int n=nums.size();
      int i=0;
      int sum=0;
      double ans = -1e18;
      int j=0;

      for( j=0;j<k;j++) {
        sum=sum+nums[j];
      }
      ans=max(ans,(double)sum/k);
      while(j<n){
           sum=sum+nums[j];
           sum=sum-nums[i];
           i=i+1;
           j=j+1;
           ans=max(ans,(double)sum/k);
      }


     return ans;
    }
};