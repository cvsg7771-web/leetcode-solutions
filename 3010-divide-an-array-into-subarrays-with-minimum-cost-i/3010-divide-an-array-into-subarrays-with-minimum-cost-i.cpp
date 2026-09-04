class Solution {
public:
    int minimumCost(vector<int>& nums) {
        vector<int> v=nums;
        sort(v.begin(),v.end());

        if(nums[0]==v[0]||nums[0]==v[1]||nums[0]==v[2])
        {
            return v[0]+v[1]+v[2];
        }

        return nums[0]+v[0]+v[1];

        
    }
};