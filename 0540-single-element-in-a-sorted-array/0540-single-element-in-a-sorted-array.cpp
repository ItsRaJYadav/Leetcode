class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int ans;
        // unordered_map<int,int>mp;
        // for(auto i:nums){
        //     mp[i]++;
        //                         //O(N) with space
        // }
        // for(auto i:mp){
        //     if(i.second==1)ans=i.first;
        // }
        // return ans;

       
        // int ans=0;
        // for(auto &i:nums){
        //     ans^=i;
        // }
        // return ans;

        int start = 0, end = nums.size() - 1;
        while (start < end) {
            long mid = (start + end) / 2;
            if (mid % 2!=0) mid-=1;
            if (nums[mid] == nums[mid + 1]) start = mid + 2;
            else end = mid;
        }
        return nums[start];
    }
};