class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int s = heights.size();
        stack<int> st;
        vector<int> ans(s, 0);
        for (int i = s - 1; i >= 0; i--) {
            int count = 0;
            while (!st.empty() && st.top() < heights[i]) {
                count++;
                st.pop();
            }
            if(!st.empty())
            {
                ans[i]=count+1;
            }
            else 
            {
                ans[i]=count;
            }

            st.push(heights[i]);
        }
        return ans;
    }
};