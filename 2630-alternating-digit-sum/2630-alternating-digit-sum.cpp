class Solution {
public:
    int alternateDigitSum(int num) {
         string s = to_string(num);
        int sum=0,temp=0;
        for(int i=0;i<s.size();i++){
            char a=s.at(i);
            if(temp%2==0){
                temp++;
                sum+=(a-'0');
            }
            else {
                sum-=(a-'0');
                temp++;
            }
        }
        return sum;
    }
};