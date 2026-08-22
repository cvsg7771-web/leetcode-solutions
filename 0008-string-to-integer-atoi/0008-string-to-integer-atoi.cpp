class Solution {
public:
    int myAtoi(string s) {
        
        int i=0;
        int m=0;
       while(i < s.size() &&s[i] == ' ')
       {
       i++;
       }
        if (i == s.size()) {
            return 0;
        }
   


  if(s[i] == '-')
 {
    m = -1;
    i++;
  }
else if(s[i]=='+')
{
    m = 1;
    i++;
}
else
{
    m = 1;
}


     
        long long a=0;
       
        while(i< s.size()&&s[i]-'0'>=0&&s[i]-'0'<=9)
        {
            
            a =1LL* a * 10 + (s[i]-'0');
             if (m == 1 && a > INT_MAX) {
                return INT_MAX;
            }

            if (m ==-1&& -a<INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        return a*m;

        
    }
};