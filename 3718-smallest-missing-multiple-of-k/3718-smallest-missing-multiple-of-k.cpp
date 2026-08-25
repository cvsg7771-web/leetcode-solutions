class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>v(101,0);
        
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]=1;

        }
        
        int p=k;
        
        while(p<101&&v[p])
        {
           p+=k;
           
        }
        return p;
        
    }
};