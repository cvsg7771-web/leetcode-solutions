class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m,string(n,'#'));
       

        int i=0;
        int j=0;
        int c=0;

       while(j<=n-1)
       {
        ans[i][j]='.';
        j++;
       }
       j--;

       while(i<=m-1)
       {
        ans[i][j]='.';
        i++;
       }

        return ans;
        
    }
};