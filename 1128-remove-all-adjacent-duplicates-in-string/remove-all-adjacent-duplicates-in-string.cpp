class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;//important
        string ans;
        st.push(s[0]);

        for(int i=1;i<s.size();i++){
           if(!st.empty() && st.top()==s[i]){//important to chec
            st.pop();
           }
           else{
            st.push(s[i]);
           } 
          
        }
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};