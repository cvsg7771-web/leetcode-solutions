class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> v(nums.size(),0);
        int l=0;
        int r=nums.size()-1;
        int pos=nums.size()-1;
        while(l<=r)
        {
            int a=nums[l]*nums[l];
            int b=nums[r]*nums[r];
            if(a>b)
            {
                v[pos]=a;
                l++;

            }
            else
            {
                v[pos]=b;
                r--;

            }
            pos--;
        }
        return v;
        
    }
};