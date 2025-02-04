class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum=nums[0], sum= nums[0];
        for(int i=1; i<nums.size();i++){
            
                if(nums[i]>nums[i-1]){
                    sum+= nums[i];
                     maxSum= max(sum, maxSum);
                }
              
            else{
              sum= nums[i];
                     maxSum= max(sum, maxSum);  
            }
        }
        return maxSum;
    }
};