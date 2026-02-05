//using two pointer do not require nlogn complexity of sorting
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int i=0;
       int j=nums.size()-1;
       vector<int>v;

       while(i<=j){
        if(abs(nums[i])>abs(nums[j])){
           v.push_back(nums[i]*nums[i]);
           i++;
        }
        else{
            v.push_back(nums[j]*nums[j]);
            j--;

        }
       }
       reverse(v.begin(),v.end());
       return v;
    }
};