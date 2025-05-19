class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int leftSum = 0;
        int rightSum=0;        
        for (int i = 0; i < k; i++) {
            leftSum += nums[i];
        }

        int maxSum = leftSum;

        // for(int i=k-1 ; i>=0; i--){
        //     leftSum-=nums[i];
        //     rightSum+=nums[rightIndex];
        //     rightIndex--;
        //     maxSum= max(leftSum+ rightSum, maxSum);
        // }


        for(int i=0; i<k; i++){
            leftSum= leftSum- nums[k-1-i] + nums[n-1-i];
            maxSum= max(maxSum, leftSum);
        }

        return maxSum;
    }
};
