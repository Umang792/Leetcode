class Solution {
public:
    bool helper(string &s,int i,int j){
        while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        bool umg=true;
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else if(s[i]!=s[j]){
              bool ans1=helper(s,i+1,j);
              bool ans2=helper(s,i,j-1);
              umg=ans1||ans2;
              break;
            }
            
        }
    
        return umg;
        
    
    }
};