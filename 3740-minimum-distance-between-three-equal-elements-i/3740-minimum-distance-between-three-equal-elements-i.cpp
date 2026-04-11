class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int ans = INT_MAX;

        for(int j=0; j<n; j++){
            for(int i=0; i<j; i++){
                if(nums[i] != nums[j]) continue;
                for(int k=j+1; k<n; k++){
                    if(nums[k]==nums[j]){
                        int dist=2*abs(k-i);
                        ans = min(ans, dist);
                    }
                }
            }
        }
        return ans == INT_MAX ? -1 :ans;
    }
};