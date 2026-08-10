class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_map<int,int> mp;
       
        for(int i=0;i<nums.size();i++)
        {
            mp.insert({nums[i],nums[i]});
          
        }
        
        int ans=0;
        for(auto i:mp)
        {
            int x=i.first;
            int s=1;
            if(mp.find(x-1)==mp.end())
            {
            
            while(mp.find(x+1)!=mp.end())
            {
                x++;
                s++;
            }
            }
            ans=max(ans,s);
        }
    
        return ans;
        
        

        
    }
};