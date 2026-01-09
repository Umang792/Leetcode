// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         map<char,int>magi;
//         map<char,int>ranu;

//         for(int i=0;i<magazine.size();i++){
//             magi[magazine[i]]++;
//         }

//         for(int i=0;i<ransomNote.size();i++){
//             ranu[ransomNote[i]]++;
//         }


//         for(auto it:ranu){
//             char c=it.first;
//             int freq=it.second;
//             int freq1=magi[c];
//             if(freq>freq1){
//                 return false;
//             }
//         }
//         return true;
//     }
// };



class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        // Store count of each character from magazine
        for (int i = 0; i < magazine.length(); i++) {
            freq[magazine[i] - 'a']++;
        }

        // Check ransomNote characters
        for (int i = 0; i < ransomNote.length(); i++) {
            int idx = ransomNote[i] - 'a';

            if (freq[idx] == 0) {
                return false;   // character not available
            }

            freq[idx]--;       // use character
        }

        return true;
    }
};

