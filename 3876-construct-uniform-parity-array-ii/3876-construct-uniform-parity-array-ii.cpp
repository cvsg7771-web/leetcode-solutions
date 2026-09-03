class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        if(nums1.size()==1)
        {
            return true;
        }
        int odd=0;
        int even=0;
        int lo=0;
        int le=0;
        
        
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]%2==0)
            {
                if(!even)
                {
                    le=nums1[i];
                }
                else
                {
                    le=min(le,nums1[i]);
                }
                even=1;
                
                
            }
            else
            {
                if(!odd)
                {
                    lo=nums1[i];
                }
                else
                {
                    lo=min(lo,nums1[i]);
                }
                odd=1;
                
            }
        }
        if(odd&&even)
        {
            return le>lo;
        }
        return true;
        
    }
};