class Solution {
public:
    int trap(vector<int>& height) {
        int h=height.size();
        stack<int> st;
        vector<int>pr(height.size(),-1);
        vector<int>nx(height.size(),-1);

        for(int i=h-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()<=height[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                nx[i]=-1;
                st.push(height[i]);
            }
            else
            {
                nx[i]=st.top();
            }

        

        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=0;i<h;i++)
        {
            while(!st.empty()&&st.top()<=height[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                pr[i]=-1;
                st.push(height[i]);
            }
            else
            {
                pr[i]=st.top();
            }
           
        }

        int ans=0;


        for(int i=0;i<h;i++)
        {
            int c=min(pr[i],nx[i]);
            if(c<0)
            {
                continue;
            }

            ans=ans+c-height[i];


        }
        return ans;
        
    }
};