class Solution {
public:
    int countSegments(string s) {
        int count = 0;

        for (int i = 0; i < s.size(); i++) {

            // current character must be a letter
            if (s[i] != ' ') {

                // first character of string
                if (i == 0) {
                    count++;
                }
                // previous character was space
                else if (s[i - 1] == ' ') {
                    count++;
                }
            }
        }
        return count;
    }
};
