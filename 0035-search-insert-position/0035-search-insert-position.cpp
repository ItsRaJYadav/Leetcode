class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==t)return mid;
            else if(t>nums[mid]) {
              s= mid+1;
            }
            else e=mid-1;
        }
        return s;
        // return low_b(nums,t);

        
    }
};