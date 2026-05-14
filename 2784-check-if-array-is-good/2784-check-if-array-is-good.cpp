class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end());

        // Step 1: check length
        // if (nums.size() != n + 1) return false;

        // Step 2: frequency count
        vector<int> freq(n + 1, 0);

        for (int num : nums) {
            if (num > n) return false;
            freq[num]++;
        }

        // Step 3: validate
        for (int i = 1; i < n; i++) {
            if (freq[i] != 1) return false;
        }

        // n should appear twice
        if (freq[n] != 2) return false;

        return true;
    
    }
};