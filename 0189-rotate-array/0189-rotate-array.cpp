class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<< " ";
        // }
        reverse(nums.begin() + k, nums.end());
    }
};