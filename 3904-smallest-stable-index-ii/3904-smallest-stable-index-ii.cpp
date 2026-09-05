class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n=nums.size();
        vector<int>pg(n);
        vector<int>ns(n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&st.top()<=nums[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                pg[i]=nums[i];
                st.push(nums[i]);
            }
            else
            {
                pg[i]=st.top();
            }
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()>=nums[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ns[i]=nums[i];
                st.push(nums[i]);
            }
            else
            {
                ns[i]=st.top();
            }
        }

       
        for(int i=0;i<n;i++)
        {
            if((pg[i]-ns[i])<=k)
            {
               return i;
            }
        }
       
return -1;
        
    }
};