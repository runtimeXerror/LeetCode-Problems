class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1, 0);

        //freq count
        for(int num : nums){
            freq[num]++;
        }
        //find duplicate and missing
        int duplicate = -1;
        int missing = -1;
        for(int i=0; i<=n; i++){
            if(freq[i] == 2){
                duplicate = i;
            }else if(freq[i] == 0){
                missing = i;
            } 
        }
        return {duplicate, missing};
    }
};                             