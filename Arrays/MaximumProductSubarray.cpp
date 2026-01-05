class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int curr = nums[i];
            if (curr < 0)
                swap(maxProd, minProd);
            maxProd = max(curr, maxProd * curr);
            minProd = min(curr, minProd * curr);

            ans = max(ans, maxProd);
        }
        return ans;
    }
};
