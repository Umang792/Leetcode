class Solution {
public:
    bool checkIfPangram(string sentence) {
      vector<char>v(26,0);
      int umg=true;
      for(int i=0;i<sentence.size();i++){
        v[sentence[i]-'a']++;
      }
      for(int i=0;i<26;i++){
        if(v[i]==0){
            umg=false;
        }
      }
      return umg;
        
    }
};