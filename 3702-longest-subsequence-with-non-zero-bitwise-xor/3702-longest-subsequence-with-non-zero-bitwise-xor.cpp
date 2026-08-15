class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        bool a=false;
        for(int i:nums)
        {
            if(i>0)
            {
                a=true;
            }
            total=total^i;
        }
        if(total!=0)
        {
            return n;
        }
        if(a)
        {
            return n-1;
        }
        return 0;


        
    }
};