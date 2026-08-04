class Solution {
public:
    string reverseStr(string s, int k) {
        int l=s.length();
        int i=0;
        if(l==0||l==1)
        {
            return s;
        }

        while(i<s.length()) {
            if ( l< k) {
                int a = i;
                int b = i+l-1;
                while (a < b) {
                    swap(s[a], s[b]);
                    a++;
                    b--;
                }
                return s;
            }
            else if(l>k&&l<(2*k))
            {
                int a = i ;
                int b = i+k-1;
                while (a < b) {
                    swap(s[a], s[b]);
                    a++;
                    b--;
                }
               
                i=i+(2*k);

            }
            else
            {
                int a = i;
                int b = i+k-1;
                while (a < b) {
                    swap(s[a], s[b]);
                    a++;
                    b--;
                }
               l=l-(2*k);
                i=i+(2*k); 
            }
        }
        return s;
    }
};