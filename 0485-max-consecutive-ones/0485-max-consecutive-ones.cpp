class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxsum=0, sum= 0;
        for (int i=0 ; i<nums.size(); i++){
            if(nums[i]==1){
                sum+=1;
                maxsum=max(sum, maxsum);
            }
            else{
                sum=0;
            }
        }
        return maxsum;
    }
};