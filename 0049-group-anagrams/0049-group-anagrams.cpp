class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto &s:strs){
            string temp=s;
            sort(begin(temp),end(temp));
            mp[temp].push_back(s);
        }
        vector<vector<string>> ans;

        for(auto i:mp){
         ans.push_back(i.second);
        }
        return ans;
    }
};