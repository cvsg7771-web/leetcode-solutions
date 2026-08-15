class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v(2*n,0);
        int p1=0;
        int p2=n;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==0)
            {
                v[i]=nums[p1];
                p1++;
            }
            else
            {
                v[i]=nums[p2];
                p2++;
            }
        }
        return v;

        
    }
};