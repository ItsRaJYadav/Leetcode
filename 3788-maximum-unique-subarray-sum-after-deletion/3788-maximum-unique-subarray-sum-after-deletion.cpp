class Solution {
public:
    int maxSum(vector<int>& nums) {
        int max_sum = 0;
        unordered_set<int> seen;

        bool onlyNeg = true;

        int maxNeg = -100;

        for (int num : nums) {
            if (num >= 0 && seen.find(num) == seen.end()) {
                max_sum += num;
                seen.insert(num);
                onlyNeg = false;
            } else {
                maxNeg = max(maxNeg, num);
            }
        }

        return onlyNeg== true? maxNeg: max_sum;
    }
};