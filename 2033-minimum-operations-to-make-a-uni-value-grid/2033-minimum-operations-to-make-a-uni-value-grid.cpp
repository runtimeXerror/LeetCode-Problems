class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;
        // Step 1: Flatten
        for (auto &row : grid) {
            for (int val : row) {
                nums.push_back(val);
            }
        }
        // Step 2: Check feasibility
        int base = nums[0];
        for (int val : nums) {
            if ((val - base) % x != 0) {
                return -1;
            }
        }
        // Step 3: Sort
        sort(nums.begin(), nums.end());

        // Step 4: Median
        int median = nums[nums.size() / 2];

        // Step 5: Count operations
        int op = 0;
        for (int val : nums) {
            op += abs(val - median) / x;
        }
        return op;
    }
};