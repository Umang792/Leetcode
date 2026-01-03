class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> mp;

        // store elements of nums1
        for (int x : nums1) {
            mp[x]++;
        }

        // check nums2
        for (int x : nums2) {
            if (mp.count(x)) {
                ans.push_back(x);
                mp.erase(x);  // ensure uniqueness
            }
        }

        return ans;
    }
};
