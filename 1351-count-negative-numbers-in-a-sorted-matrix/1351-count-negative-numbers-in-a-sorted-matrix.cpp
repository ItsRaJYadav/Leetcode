class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int answer=0;
        int row=grid.size()-1;
        int col=0;
        int totalColumns=grid[0].size();
        while(row>=0 and col<totalColumns){
            if(grid[row][col]<0){
                answer+=totalColumns-col;
                row--;
            } else {
                col++;
            }
        }
        return answer;
    }
};