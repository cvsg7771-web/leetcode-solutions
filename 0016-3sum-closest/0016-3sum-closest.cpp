class Solution {
public:

    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int k=0;
        
         int dif=INT_MAX;
        for(int i=0;i<nums.size()-2;i++)
        {
            k=i+1;
            j=nums.size()-1;
           
            while(k<j)
            {
             int ad=nums[i]+nums[j]+nums[k];
            if(abs(dif)>abs(target-ad))
            {
                dif=target-ad;
            }

            if(ad<target)
            {
                k++;
            }
            else if(ad==target)
            {
                return ad;
            }
            else
            {
                j--;
            }

            }
        } 
        return  target-dif;
        
    }
};