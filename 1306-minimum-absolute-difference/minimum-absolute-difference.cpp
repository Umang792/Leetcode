class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       sort(arr.begin(),arr.end()) ;
       vector<int>v;
       vector<vector<int>>final;

       int ans=INT_MAX;
      
       for(int i=0;i<arr.size()-1;i++){
        if(abs(arr[i]-arr[i+1])<ans){
           ans=abs(arr[i]-arr[i+1]);
        }
       }
       for(int i=0;i<arr.size()-1;i++){
        if(abs(arr[i]-arr[i+1])==ans){
           v.push_back(arr[i]);
           v.push_back(arr[i+1]);
           final.push_back(v);
           v.pop_back();
           v.pop_back();
        }
       }

       return final;
    }
};