class Solution {
public:
    int romanToInt(string s) {
        if(s.length()==0)
        {
            return 0;
        }
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        int i=0;
        int a=0;
        while(i<s.length())
        {
            if(mp[s[i]]<mp[s[i+1]])
            {
                a=a-mp[s[i]];
            }
            else
            {
            a=a+mp[s[i]];
            }
            i++;

        }
        return a;
        
       
        
    }
};