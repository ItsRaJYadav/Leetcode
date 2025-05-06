class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int maxSum = nums[0];
        int start = 0, end = 0, s = 0;
        for (int i = 1; i < nums.size(); i++) {
            // sum= max(nums[i]+sum, nums[i]);
            // maxSum= max(sum, maxSum);

            if (nums[i] > nums[i] + sum) {
                sum = nums[i];
                s = i;
            } else {
                sum += nums[i];
            }
            if (sum > maxSum) {
                maxSum = sum;
                start = s;
                end = i;
            }
        }

        vector<int> ans;
        for (int i = start; i < end; i++) {
            ans.emplace_back(nums[i]);
        }

        for (int i = start; i < end; i++) {
            cout << "and is " << nums[i] << " ";
        }
        return maxSum;
    }
};