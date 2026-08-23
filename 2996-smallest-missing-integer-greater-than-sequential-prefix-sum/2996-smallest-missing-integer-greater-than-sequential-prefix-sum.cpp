class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if (nums.size() == 1) {
            return (nums[0] + 1);
        }
        int sum = nums[0];
        int i = 1;
        while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
            sum += nums[i];
            i++;
        }
      

        unordered_set<int> st;
        for (int j = 0; j < nums.size(); j++) {
            st.insert(nums[j]);
        }
        while (st.find(sum) != st.end()) {
            sum++;
        }

        return sum;
    }
};