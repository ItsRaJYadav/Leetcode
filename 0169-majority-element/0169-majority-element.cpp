class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
        }
        
        for(auto &i:mp){
            if(i.second>nums.size()/2)return i.first;
        }
        return 0;
    }
};

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maj_Element=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else count=1;
            if(count>nums.size()/2){         //brute force T.C.= O(nlogn)
                maj_Element=nums[i];
                break;
            }
        }
        return maj_Element;
    }
};

*/




/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {   //worst brute force O(N*N)
            if (nums[j] == nums[i]) {
                count++;                                                                                                
            }
        }
        if (count > n / 2) {
            return nums[i];
        }
    }   
    return -1;
    }
};
*/
