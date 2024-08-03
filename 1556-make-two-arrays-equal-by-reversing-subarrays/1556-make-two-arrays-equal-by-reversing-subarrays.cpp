class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
    unordered_map<int, int> tC;
    unordered_map<int, int> aC;
    //by usesing extra space not accepted
    for (int num : target) {
        tC[num]++;
    }
    
    for (int num : arr) {
        aC[num]++;
    }
    return tC == aC;
    }
};