//element insert kartai raho aur uska freq char array mai store kartai raho agar kisi ki bhi freq >1 hui means dublicate means back sai delete kartai raho jab tak uss particular element ki freq 1 na ho jai
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int ans=INT_MIN;
        int count =0;
        vector<char>v(256,0);

        while(i<s.size()){
            v[s[i]]++;

            while(v[s[i]]==2){
                v[s[j]]--;
                j++;

            }
            count=i-j+1;
            ans=max(ans,count);
            i++;
        }

        if(ans==INT_MIN)return 0;
        return ans;
    }
};




// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int i=0;
//         int j=0;
//         int ans=INT_MIN;
//         int count =0;
//         vector<char>v(256,0);

//         while(i<s.size()){
//             v[s[i]]++;
//             count++;

//             while(v[s[i]]>1){
//                 v[s[i]]--;
//                 j++;
//                 count--;
//             }
//             ans=max(ans,i-j+1);
//         }

//         if(ans==INT_MIN)return 0;
//         return ans;
//     }
// };