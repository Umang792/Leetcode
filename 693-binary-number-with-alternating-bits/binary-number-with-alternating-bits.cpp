class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>ans;
        bool umg=true;
        while(n>0){
            int r=n%2;
            n=n/2;
            ans.push_back(r);
        }
        for(int i=0;i<ans.size()-1;i++){
          if(ans[i]==ans[i+1]){
            umg=false;
          }
        }
        return umg;
    }
};