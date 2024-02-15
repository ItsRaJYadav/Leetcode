class Solution {
public:
    char findTheDifference(string s, string t) {
        int S = 0;
        int T = 0;
       for(char ch:s)
       {
           S+=ch;
       }
        for(char ch:t)
       {
           T+=ch;
       } 
       return T-S; 
    }
};