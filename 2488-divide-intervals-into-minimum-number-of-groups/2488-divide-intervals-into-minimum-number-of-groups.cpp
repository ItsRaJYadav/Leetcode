class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        
         sort(intervals.begin(), intervals.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans = 1, n = intervals.size();

        for(int i = 0; i < n; i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(!pq.empty() && pq.top() > start) {
                ans++;
            }else if(!pq.empty()) pq.pop();

            pq.push(end + 1);
        }

        return ans;
    
    }
};