class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     return nums[0];
        // }
        return nums[0];
    }
};