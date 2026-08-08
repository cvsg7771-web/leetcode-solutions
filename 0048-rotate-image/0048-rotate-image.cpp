class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       for(int i=0;i<n;i++)
       {
        for(int j=i+1;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
       }
       for(int i=0;i<n;i++)
       {
        int j=n-1;
        int a=0;
        while(a<j)
        {
        swap(matrix[i][a],matrix[i][j]);
        a++;
        j--;
        }
       }
    
        
    }
};