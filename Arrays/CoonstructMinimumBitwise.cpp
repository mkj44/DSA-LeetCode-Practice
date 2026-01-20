class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for (int n : nums) {
            if (n % 2 == 0) {
                ans.push_back(-1);
                continue;
            }
            int best = -1;
            for (int x = 0; x < n; x++) {
                if ((x | (x + 1)) == n) {
                    best = x;
                    break;
                }
            }
            ans.push_back(best);
        }
        return ans;
    }
};
