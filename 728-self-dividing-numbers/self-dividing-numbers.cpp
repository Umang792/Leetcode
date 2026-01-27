class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;

        for(int i=left;i<=right;i++){
            int val=i;
            bool umg=true;

           while(val>0){

            int r=val%10;
            if(r==0){
                umg=false;
                break;
                }
            if(i%r!=0){
                umg=false;
                break;
            }
           
            val=val/10;

           }
           if(umg){
            ans.push_back(i);
           }
           
        }
        return ans;
    }
};