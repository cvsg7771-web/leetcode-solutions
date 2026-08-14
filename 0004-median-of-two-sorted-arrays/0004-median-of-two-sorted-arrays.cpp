class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }
        int m = nums1.size();
        int n = nums2.size();
        int low = 0;
        int high = m ;

        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (m + n + 1) / 2 - cut1;
            int left1,left2,right1,right2;
            if (cut1 == 0) {
                 left1 = INT_MIN;

            } else {
                 left1 = nums1[cut1 - 1];
            }
            if(cut1==m)
            {
                 right1=INT_MAX;
            }
            else
            {
                 right1=nums1[cut1];
            }
            if(cut2==n)
            {
                 right2=INT_MAX;
            }
            else
            {
                 right2=nums2[cut2];
            }
            if(cut2==0)
            {
               left2=INT_MIN;
            }
            else
            {
                 left2=nums2[cut2-1];
            }

            if(left1<=right2&&right1>=left2)
            {
                if((m+n)%2==0)
                {
                    int a=min(right1,right2);
                    int b=max(left1,left2);
                   double c=(a+b)/2.0;
                   return c;
                }
                else
                {
                    return max(left1,left2);
                }
            }
            else if(left1>right2)
            {
                high=cut1-1;

            }
            else
            {
                low=cut1+1;
            }
        }
        return 0.0;

    }
};