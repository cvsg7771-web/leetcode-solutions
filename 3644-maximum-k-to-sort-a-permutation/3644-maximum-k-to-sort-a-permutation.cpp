class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int b=0;
        int flg=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
                if(!flg)
                {
                    b=nums[i];
                    flg=1;
                }
                else
                {
                    b=b&nums[i];
                }
            }
            
        }
        return b;

        
    }
};