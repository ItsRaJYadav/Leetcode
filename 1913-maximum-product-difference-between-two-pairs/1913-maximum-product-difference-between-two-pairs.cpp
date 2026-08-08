class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int ans ;
        int n= nums.size();
        sort(nums.begin(), nums.end()); // brute force

        ans= nums[n-1]* nums[n-2] - nums[0]* nums[1];

        return ans;
    }
};