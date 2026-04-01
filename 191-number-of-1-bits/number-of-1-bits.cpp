// 🔥 Best Approach (Brian Kernighan’s Trick)

// 👉 Key idea:
// Each time you do
// n = n & (n - 1)
// 👉 it removes the last set bit (1)
//👉 Even though n is an integer, internally it is stored in binary (bits) in memory.
//👉 You are automatically working on binary, no need to convert manually.

class Solution {
public:
    int hammingWeight(int n) {
        int count =0;
        while(n!=0){
           n=n&(n-1);
           count++;
        }
        return count;
    }
};