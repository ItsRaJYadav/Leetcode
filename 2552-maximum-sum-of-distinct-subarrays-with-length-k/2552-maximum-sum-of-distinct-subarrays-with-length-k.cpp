class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0, j=0;
        long long sum=0 , maxi=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            sum+=nums[j];
            if(j-i+1==k){
               if(mp.size()==k){
                   maxi=max(maxi, sum);
               }
               sum-=nums[i];
               mp[nums[i]]--;
               if(mp[nums[i]]==0){
                   mp.erase(nums[i]);
               }
               i++;
           }
           j++;
        }

        return maxi;
    }
};