class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(1001,0);
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++)
        {
            v[nums1[i]]++;
        }
        int i=0;
        vector<int>v1;
        while(i<nums2.size())
        {
            if(v[nums2[i]]>0)
            {
                v1.push_back(nums2[i]);
                v[nums2[i]]--;

            }
            while(i<nums2.size()-1&&nums2[i]==nums2[i+1])
            {
                i++;
            }
            i++;
        }
        return v1;
        
    }
};