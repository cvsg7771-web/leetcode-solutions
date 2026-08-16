class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int zeroes=0;
        int ones=0;
        int twoes=0;
        for(int i=0;i<stones.size();i++)
        {
            if(stones[i]%3==0)
            {
                zeroes++;

            }
            else if(stones[i]%3==1)
            {
                ones++;
            }
            else
            {
                twoes++;
            }
        }
        if(zeroes%2==0)
        {
            return ones>0&&twoes>0;
        }
        else
        {
            return abs(twoes-ones)>2;
        }
        
    }
};