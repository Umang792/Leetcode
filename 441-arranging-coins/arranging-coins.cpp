class Solution {
public:
    int arrangeCoins(int n) {
       if(n==1) return 1;
        int count =0;
      for(int i=1;;i++)  {
        
        if(n>=i){//impo
            n=n-i;
            count++;
        }
        else{
            break;
        }
      }
      return count;
    }
};