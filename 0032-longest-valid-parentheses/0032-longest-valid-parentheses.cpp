class Solution {
public:
    int longestValidParentheses(string s) {
        int a = s.size();
        vector<int> dp(a, 0);
        int l = 0;
        int cl = 0;
        stack<int> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ')') {
                if (!st.empty() && s[st.top()] == '(') {
                    dp[i] = 1;
                    dp[st.top()] = 1;
                    st.pop();
                }

            } else {
                st.push(i);
            }
           
        }
        for(int i=0;i<a;i++)
        {
            if(dp[i]==0)
            {
                cl=0;
            }
            else
            {
                cl++;
            }

            l=max(cl,l);

        }
        return l;
    }
};