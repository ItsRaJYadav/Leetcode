class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){   //max sum
          sum=max(nums[i],sum+nums[i]);
          maxi=max(sum,maxi);
        }

        int ans=0,mini=INT_MAX;
        for(int i=0;i<nums.size();i++){  //abs min sum
          ans=min(nums[i],ans+nums[i]);
          mini=min(ans,mini);
        }

    return max(maxi,abs(mini));
    }
};