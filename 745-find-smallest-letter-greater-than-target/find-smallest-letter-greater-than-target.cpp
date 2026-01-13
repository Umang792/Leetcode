class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int n=letters.size();
        int end=n-1;
        char ans=letters[0];

        while(start<=end){
            int mid=start+(end-start)/2;

        
            if(letters[mid]<=target){
                start=mid+1;

            }
            else{
                end=mid-1;
                ans=letters[mid];
            }
        }
      return ans;

    }
};