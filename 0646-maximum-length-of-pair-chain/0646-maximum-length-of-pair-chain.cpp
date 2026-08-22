class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if(pairs.size()==0)
        {
            return 0;
        }
        sort(pairs.begin(),pairs.end());
        vector<int>v=pairs[0];
        int ans=1;
        int i=1;
        while(i<pairs.size())
        {
            if(v[0]==pairs[i][0])
            {
                
            }
            else if(v[1]>pairs[i][1])
            {
                v=pairs[i];
            }
            else if(v[1]<pairs[i][0])
            {
                v=pairs[i];
                ans++;
            }
            i++;
        }
        
        return ans;

        
    }
};