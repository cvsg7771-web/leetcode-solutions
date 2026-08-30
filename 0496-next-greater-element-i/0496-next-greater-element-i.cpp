class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        for(int i=0;i<nums2.size();i++)
        {
            mp[nums2[i]]=-1;
            if(st.empty()||st.top()>nums2[i])
            {
                st.push(nums2[i]);
            }
            else
            {
                while(!st.empty()&&st.top()<nums2[i])
                {
                    mp[st.top()]=nums2[i];
                    st.pop();
                }
                st.push(nums2[i]);
            }
        }
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(mp[nums1[i]]);
        }
return v;
        
        
    }
};