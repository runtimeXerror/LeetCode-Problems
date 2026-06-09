class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long best = *max_element(nums.begin(), nums.end()) 
                       - *min_element(nums.begin(), nums.end());
        return best * k;
    }
};