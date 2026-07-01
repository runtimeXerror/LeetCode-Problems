class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        // Last row ko DP bana do
        vector<int> dp = triangle[n - 1];
        // Bottom se upar aao
        for (int i = n - 2; i >= 0; i--){
            // Current row ke har element ko update karo
            for (int j = 0; j <= i; j++){
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
            }
        }
        return dp[0];
    }
};