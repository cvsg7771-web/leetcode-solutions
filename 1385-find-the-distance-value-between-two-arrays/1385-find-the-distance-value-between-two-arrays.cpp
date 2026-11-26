class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        sort(arr2.begin(), arr2.end());
        int ans = 0;

        for (int i = 0; i < arr1.size(); i++) {
            int mid;
            int s = 0;
            int e = arr2.size() - 1;
           

            while (s <= e ) {
                mid = s + (e - s) / 2;
                if(abs(arr2[mid]-arr1[i])<=d)
                {
                    cout<<i;
                    ans++;
                    break;
                }

                if (arr2[mid] > arr1[i]) {
                    e=mid-1;
                
                } else {
                    s=mid+1;
                }

                
            }
           
        }

        return arr1.size()-ans;
    }
};