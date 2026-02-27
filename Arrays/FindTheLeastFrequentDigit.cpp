class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> mpp;

        while(n > 0){
            int digit = n % 10;
            n = n / 10;
            mpp[digit]++;
        }
        
        vector<pair<int, int>> v(mpp.begin(), mpp.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if(a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        });

        return v[0].first;
    }
};
