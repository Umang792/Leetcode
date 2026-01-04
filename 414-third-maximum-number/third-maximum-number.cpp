class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end(), greater<int>());
        int max=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=max ){
                max=nums[i];
                count++;
                if(count==3){
                    return nums[i];
                }
            }

        }
        return nums[0];
    }
};