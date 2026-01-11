class Solution {
public:
    bool canShip(vector<int>& weights, int days, int cap) {
        int d = 1, load = 0;
        for (int w : weights) {
            if (load + w > cap) {
                d++;
                load = w;
            } else {
                load += w;
            }
        }
        return d <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        int ans = r;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (canShip(weights, days, mid)) {
                ans = mid;
                r = mid - 1; 
            } else {
                l = mid + 1; 
            }
        }
        return ans;
    }
};
