class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int m=nums[0];
        int i1=0;
        int mn=nums[0];
        int i2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mn)
            {
                mn=nums[i];
                i2=i;
            }
            if(nums[i]<m)
            {
                m=nums[i];
                i1=i;
            }
        }
        int s=nums.size();
        return min({max(i1,i2)+1,s-min(i1,i2),min(i1,i2)+1+s-max(i1,i2)});
        
    }
};