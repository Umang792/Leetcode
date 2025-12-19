class Solution {
public:
    int countDigits(int num) {
        int umg=num;
        int count=0;
        while(num>0){
            int r=num%10;
            if(umg%r==0){
                count++;
            }
            num=num/10;
        }
        return count;
    }
};