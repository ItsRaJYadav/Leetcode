class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int N = nums.size(), count = 0, ans = 0;  // Time: O(N) Space: O(1)
        for (j=0; j < N; j++) {
           if(nums[j]==0)count++;
            while (count > 1){
              if(nums[i]==0)count--;
                 i++;
            }
            ans = max(ans, j - i+1); 
        }
        return ans-1;
    }
};