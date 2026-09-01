class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans=0;
        for(int i=0;i< operations.size();i++)
        {
            if(operations[i]=="C")
            {
                st.pop();
            }
            else if(operations[i]=="D")
            {
                st.push(2*st.top());
            }
            else if(operations[i]=="+")
            {
                int a=st.top();
                st.pop();
                int s=a+st.top();
                st.push(a);
                st.push(s);
                
            }
            else
            {
                st.push(stoi(operations[i]));
            }

        }
        while(!st.empty())
        {
            ans=ans+st.top();
            st.pop();
        }
        return ans;

        
    }
};