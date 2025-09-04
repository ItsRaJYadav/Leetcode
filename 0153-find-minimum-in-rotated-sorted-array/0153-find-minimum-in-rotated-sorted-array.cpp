class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;
        int ans= INT_MAX;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            cout<<"mid is "<<mid;
            if (nums[mid] >= nums[end]) {
                ans= min(ans, nums[start]);
                start = mid + 1;
            } 
            else{
                ans= min(ans, nums[mid]);
                end = mid - 1;
                
            }


        }

        // return nums[start];

        return ans;
    }
};