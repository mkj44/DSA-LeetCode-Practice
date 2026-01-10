class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long sum = 0;
            for (int x : nums) {
                sum += (x + mid - 1) / mid; 
            }
            if (sum <= threshold) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
