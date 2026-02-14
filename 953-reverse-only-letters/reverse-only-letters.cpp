class Solution {
public:
    string reverseOnlyLetters(string s) {
      int siz=s.size(); 
      int i=0;
      int j=siz-1;
      while(i<j){
        if(!isalpha(s[i])){
            i++;  
        }
        else if(!isalpha(s[j])){
            j--;
        }
        else{
            swap(s[i],s[j]);
            i++;
            j--;
        }
      }
      return s;

    }
};