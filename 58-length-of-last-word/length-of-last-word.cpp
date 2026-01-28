class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;
        bool umg=false;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                umg=true;
                count++;
                
            }
            if(s[i]==' '&& umg){
              break;
            }
             
        }
        return count;
    }
};