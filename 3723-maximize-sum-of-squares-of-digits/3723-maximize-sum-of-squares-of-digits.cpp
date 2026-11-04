class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        while(sum&&num)
        {
            char x='0'+min(9,sum);
            ans.push_back(x);
            num--;
            sum-=min(9,sum);
        }

        if(sum)
        {
            return "";
        }
        while(num)
        {
            ans.push_back('0');
            num--;
        }
        return ans;
    }
};