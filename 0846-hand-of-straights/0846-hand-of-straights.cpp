class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)
        {
            return false;
        }
        sort(hand.begin(),hand.end());
        unordered_map<int,int>mp;
        for(int i=0;i<hand.size();i++)
        {
            mp[hand[i]]++;

        }
        int gsize=hand.size()/groupSize;
        int gcount=0;
        for(int i=0;i<hand.size();i++)
        {
            int c=0;
            int cd=hand[i];
            while(c < groupSize && mp[cd] > 0)
            {
                c++;
                mp[cd]--;
                cd++;
            }
            if(c==groupSize)
            {
                gcount++;
            }
            if(gcount==gsize)
            {
                return true;
            }
            
            
        }
        return false;
    }
};