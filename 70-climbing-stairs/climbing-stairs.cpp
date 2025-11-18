class Solution {
public:
    int climbStairs(int n) {

        vector<int>umg(n+1,0);
        if(n <= 1) return 1;
        umg[0]=1;
        umg[1]=1;
        
        
        for(int i=2;i<=n;i++){
        
        umg[i]= umg[i-1]+umg[i-2];
        }
        return umg[n];


    }
};