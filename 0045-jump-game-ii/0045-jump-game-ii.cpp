class Solution {
public:
    int jump(vector<int>& nums) {
      int ans = 0, left = 0, right = 0;
        while(right < nums.size() - 1) 
        {
            int maxi = 0;
            for (int i = left; i <= right; i++) 
                maxi = max(maxi, i + nums[i]);
            left = right + 1;
            right = maxi;
            ans++;
        }
        return ans;      
    }
};