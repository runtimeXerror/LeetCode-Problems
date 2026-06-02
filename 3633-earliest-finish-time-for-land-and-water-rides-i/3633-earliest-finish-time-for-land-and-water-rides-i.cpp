class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        int n = landStartTime.size();
        int m = waterStartTime.size();

        // ── Order 1: Land → Water ──
        int minLandEnd = INT_MAX;
        for (int i = 0; i < n; i++){
            minLandEnd = min(minLandEnd, landStartTime[i] + landDuration[i]);
        }
        for (int j = 0; j < m; j++) {
            int finish = max(minLandEnd, waterStartTime[j]) + waterDuration[j];
            ans = min(ans, finish);
        }

        // ── Order 2: Water → Land ──
        int minWaterEnd = INT_MAX;
        for (int j = 0; j < m; j++)
            minWaterEnd = min(minWaterEnd, waterStartTime[j] + waterDuration[j]);

        for (int i = 0; i < n; i++) {
            int finish = max(minWaterEnd, landStartTime[i]) + landDuration[i];
            ans = min(ans, finish);
        }
        return ans;
    }
};