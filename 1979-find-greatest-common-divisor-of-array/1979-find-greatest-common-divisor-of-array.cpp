class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minVal= *min_element(nums.begin(), nums.end());
        int maxVal= *max_element(nums.begin(), nums.end());

       int gcd;
        for(int i= 1; i<= min(minVal, maxVal); i++){
            if(minVal%i ==0 && maxVal % i ==0){
                gcd= i;
            }
        }

     return gcd;
    }
};