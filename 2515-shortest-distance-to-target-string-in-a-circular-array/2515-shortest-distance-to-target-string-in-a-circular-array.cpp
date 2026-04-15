class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int result = INT_MAX;

        for(int i=0; i<n; i++)
        {
            if(words[i]==target)
            {
                int stDist = abs(i-startIndex);
                int cirDist = n-stDist;

                result=min({result, stDist, cirDist});
            }
        }
        return result ==INT_MAX ? -1 : result;
    }
};