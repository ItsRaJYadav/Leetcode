class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        for(int i=1; i<nums.size();i++){
            if(nums[i]<nums[i-1]) count++;
        }
        return count<=1;
    }
};