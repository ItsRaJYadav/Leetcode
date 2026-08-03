class Solution {
public:
    bool isPalindrome(int x) {
        int dedup= x;
          long long rev= 0;

         if(x<0) return false;
         while(x!= 0){
            int digit= x%10;
            rev= (rev*10) + digit;
            // if(rev> INT_MAX/10 || rev < INT_MIN/10){
            //     return 0;
            // }
            x= x/10;
        }
        return rev== dedup;
    }
};