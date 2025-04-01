class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int one=0, two=0, zero=0;
        // for(int i=0;i<nums.size(); i++){
        //     if(nums[i]==0){
        //        zero++;
        //     }
        //     else if(nums[i]==1){
        //         one++;
        //     }else{
        //         two++;
        //     }
        // }

        // for(int i=0; i<zero; i++){
        //     nums[i]=0;
        // }
        // for(int i=zero; i<zero+one; i++){
        //     nums[i]=1;
        // }
        // for(int i=(zero+one); i<nums.size(); i++){
        //     nums[i]=2;
        // }

        int low = 0, high = nums.size() - 1, mid = 0;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);

                high--;
            }
        }
    }
};