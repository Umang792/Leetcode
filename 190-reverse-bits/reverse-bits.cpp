// class Solution {
// public:
//     int reverseBits(int n) {
//         vector<int>ans(32,0);
//         while(n>0){
//             int r=n%2;
//             n=n/2;
//             ans.push_back(r);
//         }
//         reverse(ans.begin(),ans.end());
//         int finalans=0;
//         for(int i=0;i<32;i++){
//            finalans=finalans+pow(2,i)*ans[i];
//         }
//         return finalans;
//     }
// };

class Solution {
public:
    int reverseBits(int n) {
        int num = n;   

        vector<int> ans;

       
        for(int i = 0; i < 32; i++) {
            int r = num % 2;
            num = num / 2;
            ans.push_back(r);
        }

        reverse(ans.begin(), ans.end());

        int finalans = 0;

        for(int i = 0; i < 32; i++) {
            finalans += (pow(2, i)) * ans[i];
        }

        return finalans;
    }
};
