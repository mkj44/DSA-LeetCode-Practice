// Problem: Two Sum
// Platform: LeetCode
// Approach: Hash Map
// Time: O(n)
// Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) {
            if(mp.count(target - nums[i]))
                return {mp[target - nums[i]], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};