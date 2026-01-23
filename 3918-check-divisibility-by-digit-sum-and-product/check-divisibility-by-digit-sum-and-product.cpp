class Solution {
public:
    bool checkDivisibility(int n) {
        int umg2=n;
        int umg=n;
        int sum=0;
        int prd=1;

        while(n>0){
            int r=n%10;
            prd=prd*r;
            n=n/10;
        }

        while(umg>0){
            int r=umg%10;
            sum=sum+r;
            umg=umg/10;
        }

        int val=sum+prd;
        if(umg2%val==0){
            return true;
        }
        return false;


    }

};