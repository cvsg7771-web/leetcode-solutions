class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp.insert(nums[i]);

        }
        int a=1;
        int p=k;
        while(mp.find(p)!=mp.end())
        {
           p=k*a;
           a++;
           
        }
        return p;
        
    }
};