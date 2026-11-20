class Solution {
public:
    int minimizeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n=nums.size();

        int ans=min(nums.back()-nums[2],nums[n-3]-nums[0]);
        ans=min(ans,nums[n-2]-nums[1]);
        return ans;
        
    }
};