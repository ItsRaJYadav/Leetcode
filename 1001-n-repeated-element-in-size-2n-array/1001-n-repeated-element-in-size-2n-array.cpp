class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       map<int ,int> s;
        for(int i=0;i<nums.size();i++){
            s[nums[i]++];
        }
        for(auto itr:s)
            if(itr.second>1)
                return itr.first;
        return 0;
    }
};