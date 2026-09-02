class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
        {
            return "0";
        }
        string ans="";
        bool n=false;
        if(num<0)
        {
            
            num=num*(-1);
            n=true;

        }
        while(num)
        {
            ans.push_back('0'+num%7);
            num=num/7;
        }
        reverse(ans.begin(),ans.end());
        if(n)
        {
            ans="-"+ans;
        }
        return ans;
        
    }
};