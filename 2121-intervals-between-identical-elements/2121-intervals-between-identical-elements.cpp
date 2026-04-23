class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        //Brute force solution 
        int n = arr.size();
        // vector<long long>ans(n, 0);

        // for (int i = 0; i < n; i++){
        //     long long sum = 0;

        //     for (int j = 0; j < n; j++) {
        //         if (arr[i] == arr[j] && i != j) {
        //             sum += abs(i - j);
        //         }
        //     }
        //     ans[i] = sum;
        // }
        // return ans;

        // in this soltion time limt exceed
        // Optiomal solution
        unordered_map<int, vector<int>> mp;

        // Step 1: group indices
        for (int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        vector<long long> ans(n);

        // Step 2: process each group
        for (auto &it : mp){
            vector<int> &idx = it.second;
            int k = idx.size();

            vector<long long> prefix(k + 1, 0);

            // prefix sum of indices
            for (int i = 0; i < k; i++) {
                prefix[i + 1] = prefix[i] + idx[i];
            }

            for (int j = 0; j < k; j++) {
                long long left = (long long)j * idx[j] - prefix[j];
                long long right = (prefix[k] - prefix[j + 1]) - (long long)(k - j - 1) * idx[j];
                ans[idx[j]] = left + right;
            }
        }
        return ans;
    }
};