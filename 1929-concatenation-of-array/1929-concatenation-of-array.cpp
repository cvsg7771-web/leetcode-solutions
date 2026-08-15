class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int a=nums.size();
        vector<int>ans(2*a,0);
        
        for(int i=0;i<(2*nums.size());i++)
        {
            ans[i]=nums[(i%a)];
        }
       
        
        return ans;

        
    }
};