class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left=0;
        int right=0;
        string str="";
        vector<int>v(2,0);
        int len=INT_MAX;
        for(right;right<s.size();right++)
        {
            v[s[right]-'0']++;
            if(v[1]>=k)
            {
                
              while (s[left] == '0')
             {
                 left++;
               }
               int curr=right-left+1;
                if(curr<len)
                {
                    str=s.substr(left,right-left+1);
                    len=curr;
                }
                else if(len==s.substr(left,right-left+1).size())
                {
                    str=min(s.substr(left,right-left+1),str);
                }
                v[s[left]-'0']--;
                left++;
            }

        }
        return str;
        
    }
};