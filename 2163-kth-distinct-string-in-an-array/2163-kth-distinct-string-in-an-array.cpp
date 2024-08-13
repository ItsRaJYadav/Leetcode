class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mpp;
        vector<string> distinct;

        for (const string& s : arr) {
            mpp[s]++;
        }

        unordered_map<string, bool> seen;
        for (const string& s : arr) {
            if (mpp[s] == 1 && !seen[s]) {
                distinct.push_back(s);
                seen[s] = true;
            }
        }

        if (k <= distinct.size()) {
            return distinct[k - 1];
        } else {
            return "";
        }
    }
};