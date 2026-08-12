class Solution {
public:
    string smallestSubsequence(string s) {
         vector<int> dict(256,0);
        vector<bool> visited(256,false);
        
        for(auto &c:s)dict[c]++;
        string ans = "";
        for(auto &c:s){
            dict[c]--;
            if(visited[c])continue;
            
            while(!ans.empty() && ans.back()>c && dict[ans.back()]!=0){
                visited[ans.back()]=false;
                ans.pop_back();
            }
            visited[c] = true;
            ans += c;
        }
        return ans;
    }
};