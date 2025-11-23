class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int>rem1;
        vector<int>rem2;
        int sum=0;//
        
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        
            if(nums[i]%3==1){
                rem1.push_back(nums[i]);
            }
            if(nums[i]%3==2){
                rem2.push_back(nums[i]);
            }
        }
         if(sum%3==0){
            return sum;
            }

        sort(rem1.begin(),rem1.end());
        sort(rem2.begin(),rem2.end());
        
        int result=0;
        if(sum%3==1){
            int remove1=rem1.size()>=1 ? rem1[0] : INT_MAX;
            int remove2=rem2.size()>=2 ? rem2[0] +rem2[1]: INT_MAX;
            result=sum-min(remove1,remove2);
            return result;

        }
        if(sum%3==2){
            int remove1=rem2.size()>=1 ? rem2[0] : INT_MAX;
            int remove2=rem1.size()>=2 ? rem1[0] +rem1[1]: INT_MAX;
            result=sum-min(remove1,remove2);
            return result;

        }


return 0;
           
    }
};