class Solution {

public:
    int totalMoney(int n) {

        int round=0;
        int sum=0;
       
            for(int j=1;j<=n;j++){
               sum = sum + round + ((j - 1) % 7 + 1);
                if(j%7==0){
                    round++;
                }
        }
        return sum;
    }  
    
};
        
    