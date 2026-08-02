class Solution {
public:
    int countValidPrefixes(string s) {
        vector<vector<int>> temp;
        int ans=0;
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
            {
                if(s[i]=='0')
                {
                    a++;
                }
                else
                {
                    b++;
                }
               vector<int>v={a,b};
                temp.push_back(v);
            }
        for(int i=0;i<temp.size();i++)
            {
                vector<int> v1=temp[i];
                if(abs(v1[0]-v1[1])<=1)
                {
                    ans++;
                }
            }
        return ans;
        
    }
};