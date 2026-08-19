class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>>mp;
         int ans=2*n;
        for(auto &r:reservedSeats)
        {
            int row=r[0];
            int col=r[1];
            if(mp.find(row)==mp.end())
            mp[row]=vector<int>(3,true);
            if(r[1]>=2&&r[1]<=5)
            {
                mp[row][0]=false;
            }

            if(r[1]>=4&&r[1]<=7)
            {
                mp[row][1]=false;
            }

            if(r[1]>=6&&r[1]<=9)
            {
                mp[row][2]=false;
            }

        }
        for(auto &a:mp)
        {
            auto v=a.second;
            if(v[0]&&v[2])
            {
                continue;
            }
            else if(v[0]||v[1]||v[2])
            {
               ans--;
            }
            else
            {
                ans-=2;
            }
           
        }
        return ans;
        
    }
};