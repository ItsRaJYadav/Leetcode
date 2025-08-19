class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        long long count= 0;
        // for (int i = 0; i < n; i++) {
        //     for (int j = i; j < n; j++) {
        //         if (nums[j] != 0)
        //             break;
        //         res++;
        //     }
        // }

        for(auto i: nums){
            if(i==0){
                count++; 
                res+= count;
            }
            else count=0;
        }
        return res;
    }
};