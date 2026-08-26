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
                while(v[1]>=k)
                {
                    string temp=s.substr(left,right-left+1);
                    if(temp.size()<len)
                    {
                        str=temp;
                        len=right-left+1;
                    }
                    else if(temp.size()==len)
                    {
                        str=min(temp,str);
                    }
                    v[s[left]-'0']--;
                    left++;
                }
            }

        }
        return str;
        
    }
};