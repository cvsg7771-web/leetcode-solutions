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
            mp[nums[i]]++;;
        }
        int ans=INT_MIN;
        if(k==nums.size())
        {
            for(auto a:mp)
            {
               
                    ans=max(ans,a.first);
                

            }
            return ans == INT_MIN ? -1 : ans;
        }
        int a1=INT_MIN;
        if(k==1)
        {
            for(auto a:mp)
            {
                if(a.second==1)
                {
                    a1=max(a.first,a1);
                }
            }
              return a1 == INT_MIN ? -1 : a1;

        }
        if(mp[nums[0]]>1&&mp[nums[nums.size()-1]]>1)
        {
            return -1;
        }
        if(mp[nums[0]]==1&&mp[nums[nums.size()-1]]==1)
        {
            return max(nums[0],nums[nums.size()-1]);
        }

        if(mp[nums[0]]==1)
        {
            return nums[0];
        }
        else
        {
            return nums[nums.size()-1];
        }

        return -1;
        

        
    }
};