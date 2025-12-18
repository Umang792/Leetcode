// class Solution {
// public:

//     int helper(int m,int n,int i,int j){
//         if(i==n-1&&j==m-1){
//             return 1;
//         }
//         if(i>=n||j>=m){
//             return 0;
//         }
//         int umg1=helper(m,n,i+1,j);
//         int umg2=helper(m,n,i,j+1);
//         return umg1+umg2;
//     }
//     int uniquePaths(int m, int n) {
        
//         int umg=helper(m,n,0,0);
//         return umg;


//     }
// };


class Solution {
public:
    int helper(int m, int n, int i, int j, vector<vector<int>>& dp) {
        if (i == m-1 || j == n-1) {
            return 1;
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        dp[i][j] = helper(m, n, i+1, j, dp) +
                   helper(m, n, i, j+1, dp);

        return dp[i][j];
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(m, n, 0, 0, dp);
    }
};
