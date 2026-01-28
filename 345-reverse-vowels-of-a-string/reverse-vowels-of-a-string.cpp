class Solution {
public:
    string reverseVowels(string s) {
       vector<char>v;
       
       for(int i=0;i<s.size();i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            v.push_back(s[i]);
            //s[i]='@';
        }
       }
       int n=v.size();
       reverse(v.begin(),v.end());

       for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        s[i]=v[n-1];
        n--;
        }
       }
      return s;

    }
};