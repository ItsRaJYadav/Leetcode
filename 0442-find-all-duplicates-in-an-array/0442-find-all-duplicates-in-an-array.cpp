class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            // cout<<"index"<<" "<<index<<" ";
            if (nums[index] < 0) {
                // cout<<"Numsindex"<<" "<<nums[index]<<" ";
                ans.push_back(index + 1); // T.C= O(n)
            } else
                nums[index] = -nums[index];
        }
        return ans;
    }
};

/*
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int>ans;
        for(auto &i:nums){
            if(seen.count(i)>0)ans.emplace_back(i); //if present means duplicate
            else seen.insert(i);
        }
        return ans;
    }
};
/*


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;    // by using extra space not as per the
question for(auto &i:nums){ mp[i]++;
        }
        for(auto &i:mp){
            if(i.second>1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
*/

/*
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j])continue;
                else{
                    ans.push_back(nums[i]);     //brute force O(N*N)
                    break;
                }
            }
        }
        return ans;
    }
};
*/

/*
class Solution
{
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        int n =nums.size();
         vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans.push_back(nums[i]);
                i++;
            }
        }
        return ans;         //brute force O(nlogn)
    }
};
*/