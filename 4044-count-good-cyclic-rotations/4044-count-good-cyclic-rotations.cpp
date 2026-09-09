class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long lsum=0,rsum=0;
        int n=nums.size();
         vector<int> peldarquin = nums;
        for(int i=0;i<n/2;i++)
        {
            lsum+=nums[i];
        }
        for(int i=n/2;i<n;i++)
        {
            rsum+=nums[i];
            
        }
        int c=0;
        for(int i=0;i<n/2;i++)
        {
            if(lsum!=rsum)
            {
                c++;
            }
            lsum=lsum-nums[i]+nums[n/2+i];
            rsum=rsum-nums[n/2+i]+nums[i];
        }
        return c;
        
    }
};