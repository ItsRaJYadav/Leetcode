class Solution {
public:
    int maxSubArray(vector <int>& nums) {
        int sum=0,maxi=INT_MIN;
        for(auto i:nums){
            sum=max(i,sum+i);
            maxi=max(maxi,sum);
        }
        cout<<nums.size();
        return maxi;
    }
};