class Solution {
public:
    int longestPalindrome(string s) {
      vector<int>v(128,0);
      int size=0;
      int umg=false;
      for(int i=0;i<s.size();i++){
        v[s[i]-'A']++;
      } 
      for(int i=0;i<128;i++){
        if(v[i]%2==0){
            size=size+v[i];
        }
        if(v[i]%2==1){
            size=size+v[i]-1;
            umg=true;
        }
      }
      if(umg){
        size=size+1;
      }
      return size;
       
    }
};