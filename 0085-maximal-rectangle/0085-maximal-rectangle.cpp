class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if(!row)
        {
            return 0;
        }
        int col = matrix[0].size();
        vector<vector<int>> prefix(row, vector<int>(col, 0));

        for (int i = 0; i < col; i++) {
            int s = 0;
            for (int j = 0; j < row; j++) {
                if (matrix[j][i] == '0') {
                    prefix[j][i] = 0;
                    s = 0;

                } else {
                    s++;
                    prefix[j][i] = s;
                }
            }
        }

        vector<vector<int>> ps(row, vector<int>(col, -1));
        vector<vector<int>> ns(row, vector<int>(col, col));

        for (int i = 0; i < row; i++) {
            stack<pair<int, int>> st;
            for (int j = 0; j < col; j++) {
                while (!st.empty() && st.top().first >= prefix[i][j]) {
                    st.pop();
                }

                if (!st.empty()) {
                    ps[i][j] = st.top().second;
                }
                st.push({prefix[i][j], j});
            }
        }
        for (int i = 0; i < row; i++) {
            stack<pair<int, int>> st;
            for (int j = col - 1; j >= 0; j--) {
                while (!st.empty() && st.top().first >= prefix[i][j]) {
                    st.pop();
                }

                if (!st.empty()) {
                    ns[i][j] = st.top().second;
                }
                st.push({prefix[i][j], j});
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<ps[i][j];
            }
            cout<<endl;
        }

        int area = 0;
       

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                area = max(area, (ns[i][j] - ps[i][j] - 1) * prefix[i][j]);
            }
            cout<<area;
        }

        return area;
    }
};