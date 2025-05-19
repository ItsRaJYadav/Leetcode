class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       //brute force solution
       int ans=0;
       for(int i=0;i<s.length(); i++){
         unordered_set<char> str;
        for(int j=i; j<s.length(); j++){
           if (str.find(s[j]) != str.end()) {
                    break;
            }
            str.insert(s[j]);
            ans = max(ans, j - i + 1);
        }
        
       } 

       return ans;
    }
};