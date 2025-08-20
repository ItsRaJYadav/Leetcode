class Solution {
public:
    int bs(vector<int>nums, int t, bool ff){
         int n = nums.size();
        int start = 0;
        int end = n-1;
        int res= -1;
        while(start<=end){
            int mid= start+ (end-start)/2;
            if(nums[mid]==t){
               res= mid;
               if(ff){
                end= mid-1;
               }else{
                start= mid+1;
               }
            }else if(nums[mid]<t){
                start= mid+1;
               
            } else{
                 end= mid-1;
            }
        }

        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
       

        int first = bs(nums, target, true);
        int second= bs(nums, target, false);

        // for(int i=0; i<nums.size();i++){
        //     if(nums[i]== target){
        //         if(start== -1)start= i;
        //         end= i;
        //     }
        // }
    return {first,second};
    }
};