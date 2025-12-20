// class Solution {
// public: 
//     bool isprime(int n){

//         for(int i=2;i <= sqrt(n);i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
//     void helper(int i,int&count){
//         if(i<=1){
//             return;
//         }
//         if(isprime(i)==true){
//             count++;
//         }
//     }
//     int countPrimes(int n) {
//         int count=0;
//         for(int i=1;i<n;i++){
//             helper(i,count);
//         }
//         return count;
        
//     }
// };

class Solution {
public:
    int countPrimes(int n) {

        // If n is 0, 1, or 2 → no prime numbers less than n
        if (n <= 2) return 0;

        // Create an array where index = number
        // prime[i] = true means i is assumed to be prime
        vector<bool> prime(n, true);

        // 0 and 1 are not prime numbers
        prime[0] = false;
        prime[1] = false;

        // Loop from 2 to sqrt(n)
        // i * i < n is same as i <= sqrt(n)
        for (int i = 2; i * i < n; i++) {

            // If i is still marked as prime
            if (prime[i]) {

                // Mark all multiples of i as non-prime
                // Start from i*i because smaller multiples
                // were already marked by smaller numbers
                for (int j = i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }

        // Count how many numbers are still marked as prime
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                count++;
            }
        }

        // Return the total count of prime numbers less than n
        return count;
    }
};
