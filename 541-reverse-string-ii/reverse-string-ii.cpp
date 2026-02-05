class Solution {
public:
    void helper(string&s,int i,int j){
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    string reverseStr(string s, int k) {
        int n=s.size();
        int i=0;
        int j=k-1;

        if(k>n){
            i=0;
            j=n-1;
            helper(s,i,j);
            return s;
        }

        while (i < n) {
            int end;

            if (j < n) {
                // Case 1 & 2: at least k characters exist
                end = j;
            } else {
                // Case 3: fewer than k characters remain
                end = n - 1;
            }

            helper(s, i, end);

            i = i + 2 * k;
            j = j + 2 * k;
        }
        return s;
    }
};