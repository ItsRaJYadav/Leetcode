class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
    
    for(int i = 0; i < n; i++)
    {
        if(i < n - 1 && nums[i] == nums[i + 1])
            i++;
        else
            ans.push_back(nums[i]);
    }
    
    return ans;
    }
};


