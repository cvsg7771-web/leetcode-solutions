class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int ans = 2 * n;
        unordered_map<int, vector<bool>> mp;
       
        for (int i = 0; i < reservedSeats.size(); i++) {
           
            int row = reservedSeats[i][0];
            int col = reservedSeats[i][1];
             if(mp.find(row)==mp.end())
             mp[row] = vector<bool>(3, true);
            if (reservedSeats[i][1] >= 2 && reservedSeats[i][1] <= 5) {

                mp[row][0] = false;
            }

            if (reservedSeats[i][1] >= 4 && reservedSeats[i][1] <= 7) {

                mp[row][1] = false;
            }

            if (reservedSeats[i][1] >= 6 && reservedSeats[i][1] <= 9) {

                mp[row][2] = false;
            }
        }
        for (auto a : mp) {

            auto v = a.second;
            if (v[0] && v[2]) {

                continue;
            } else if (v[0] || v[1] || v[2]) {

                ans--;
            } else {

                ans -= 2;
            }
        }
        return ans;
    }
};