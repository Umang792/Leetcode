class Solution {
public:
    bool isPalindrome(string s) {
       int n=s.size();
       vector<char>v;
       for(int i=0;i<n;i++) {
        if(s[i]>=97 && s[i]<=122){
            v.push_back(s[i]);
        }
        if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
            v.push_back(s[i]);
        }
        if(s[i] >= '0' && s[i] <= '9') {
                v.push_back(s[i]);
            }
       }
       bool umg=true;
       int i=0;
       int j=v.size()-1;
       while(i<j){
        if(v[i]!=v[j]){
            umg=false;
            break;
        }
        i++;
        j--;
       }
       return umg;

    }
};