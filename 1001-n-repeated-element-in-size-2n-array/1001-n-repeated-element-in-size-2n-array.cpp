class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> m;
        for (auto i : nums) {
            if (m.find(i) != m.end()) {
                return i;
            }
            m[i]++;
        }

        return -1;
    }
};