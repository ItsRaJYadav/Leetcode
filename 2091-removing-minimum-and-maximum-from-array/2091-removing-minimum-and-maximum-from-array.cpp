class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minValIdx=0, maxValIdx=0;

        for(int i=0; i<n; i++){
            if(nums[i]< nums[minValIdx]){
                minValIdx= i;
            }
            if(nums[i]> nums[maxValIdx]){
                maxValIdx=i;
            }
        }

        int i= min(minValIdx, maxValIdx);
        int j= max(minValIdx, maxValIdx);

        int front= j+1;
        int back= n-i;
        int both= (i+1) + (n-j);


        return min({front, back, both});
    }
};