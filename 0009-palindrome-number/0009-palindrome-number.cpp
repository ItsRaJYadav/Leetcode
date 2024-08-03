class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;  // base condition
        
        string s = to_string(x); 
        string s2 = s; 
        reverse(s2.begin(), s2.end());
        return (s == s2);
        
        if(s==s2)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};