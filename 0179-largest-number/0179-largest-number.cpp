class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        for (int n : nums) strs.push_back(to_string(n));

        sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
            return a + b > b + a;          // bada concatenation aage
        });

        if (strs[0] == "0") return "0";    // edge case: saare zero

        string result;
        for (const string& s : strs) result += s;
        return result;
    }
};