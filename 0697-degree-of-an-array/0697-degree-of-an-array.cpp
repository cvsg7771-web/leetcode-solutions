class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        unordered_map<int, pair<int, int>> mp1;
      

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if (mp1.find(nums[i]) == mp1.end()) {
                mp1[nums[i]] = {i, i};
            } else {
                mp1[nums[i]].second = i;
            }
        }
        int m = 0;
        for (auto it : mp) {
            if (it.second > m) {
                m = it.second;
            }
        }
        vector<int> v;
        for (auto it : mp) {
            if (it.second == m) {
                v.push_back(it.first);
            }
        }
        int n = INT_MAX;
        for (int i = 0; i < v.size(); i++) {
            n = min(n, mp1[v[i]].second - mp1[v[i]].first + 1);
        }
        return n;
    }
};