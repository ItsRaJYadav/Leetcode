class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            //  cout<<"this is nums"<<nums[i]<< "and target"<<" "<< target;
            if (nums[i] >= target) {
               
                return i;
            }
        }

        return nums.size();
    }
};