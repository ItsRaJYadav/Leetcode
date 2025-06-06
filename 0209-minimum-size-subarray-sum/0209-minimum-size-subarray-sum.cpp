class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int i=0,j=0,sum=0;
        int n=nums.size();
        while(j<n){
             sum+=nums[j];
            if(sum<target) j++;
            if(sum>=target){
                while(sum>=target){
                    ans=min(ans,j-i+1);
                    sum-=nums[i];
                    i++;
                }
                j++;
            }
        }
        return (ans==INT_MAX) ? 0 :ans;
    }
};