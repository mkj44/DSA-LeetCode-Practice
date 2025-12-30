class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] > nums[r]) {
                l = mid + 1;   // min is in right half
            } else {
                r = mid;       // min is at mid or left half
            }
        }
        return nums[l];
    }
};
