class Solution {
public:
   int minFR(const vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int rf = 0;

    for (int i = 0; i < m; ++i) {
        int flips = 0;
        for (int j = 0; j < n / 2; ++j) {
            if (grid[i][j] != grid[i][n - 1 - j]) {
                ++flips;
            }
        }
        rf += flips;
    }
    return rf;
}

int minFC(const vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int cf = 0;

    for (int j = 0; j < n; ++j) {
        int flips = 0;
        for (int i = 0; i < m / 2; ++i) {
            if (grid[i][j] != grid[m - 1 - i][j]) {
                ++flips;
            }
        }
        cf += flips;
    }
    return cf;
}

int minFlips(vector<vector<int>>& grid) {
    int rf = minFR(grid);
    int cf = minFC(grid);
    return min(rf, cf);
}
};