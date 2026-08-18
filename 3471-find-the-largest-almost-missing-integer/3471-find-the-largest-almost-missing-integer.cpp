class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(nums.size()<k)
        {
            return -1;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ans=-1;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(k==n||(k==1||i==0||i==n-1)&&mp[nums[i]]==1)
            {
                ans=max(ans,nums[i]);
            }
        }
        
        return ans;
        

        
    }
};