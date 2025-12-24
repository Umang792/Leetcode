class Solution {
public:
    int maximum69Number (int num) {
        vector<int>v;
        while(num){
            int r=num%10;
            v.push_back(r);
            num=num/10;
        }
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==6){
                v[i]=9;
                break;
                
            }
            
        }
        int num1=0;
        for(int i=v.size()-1;i>=0;i--){
            num1=num1*10+v[i];
        }

        return num1;


    }
};