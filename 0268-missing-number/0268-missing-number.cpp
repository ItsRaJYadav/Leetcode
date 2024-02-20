class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int ans = n*(n+1)/2;
        for(int i=0;i<n;i++){
            ans-=nums[i];
        }
        return ans;
    }
};