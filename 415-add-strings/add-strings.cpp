class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int n1=num1.size();
        int n2=num2.size();
        int carry=0;
        int sum=0;

        while(n1>0 || n2>0 || carry>0){

            int d1=0;
            int d2=0;

           if(n1>0) { 
            d1=num1[n1-1]-'0';
           }
           if(n2>0) {
             d2=num2[n2-1]-'0';
           } 

            sum=d1+d2+carry;
            carry=sum/10;
            sum=sum%10;
            
            ans.push_back(sum+'0');
            n1--;
            n2--;
        
        
    }
   reverse(ans.begin(),ans.end());
   return ans;
   

    }
};