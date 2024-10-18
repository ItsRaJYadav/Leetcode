class Solution {
public:
    bool ispalindrome(string s){
        // return equal(begin(s), end(s), rbegin(s));
        int i=0, j=s.size()-1;
        while(j>=i){
            if(s[i]==s[j]){
                i++;j--;
                
            }else{
                return false;
            }
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        string s="";
        for(auto i:words){
            if(ispalindrome(i)){
                s= i;
                break;
            }
        }
        return s;
    }
};