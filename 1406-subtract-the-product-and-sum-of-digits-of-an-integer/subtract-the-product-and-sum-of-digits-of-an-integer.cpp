class Solution {
public:
      
      int sumi(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum=sum+r;
            n=n/10;
            
        }
        return sum;

     } 
     int producti(int n){
        int prd=1;
        while(n>0){
            int r=n%10;
            prd=prd*r;
            n=n/10;
            
        }
        return prd;

     }
    int subtractProductAndSum(int n) {
        int umg1=producti(n);
        int umg2=sumi(n);
        return umg1-umg2;

    }
};