class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       while (true) {
            bool found = false;

            // search for original in the array
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == original) {
                    found = true;
                    break;
                }
            }

            // if not found → return original
            if (!found) {
                return original;
            }

            // if found → multiply by 2
            original *= 2;
        }
    };
};