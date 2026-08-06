class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest=0;
        vector<int>fr(256,0);
        int left=0;
        for(int right=0;right<s.length();right++)
        {
            fr[s[right]]++;
            while(fr[s[right]]>1)
            {
                fr[s[left]]--;
                left++;
            }
            longest=max(longest,right-left+1);
        }
        return longest;


        
    }
};