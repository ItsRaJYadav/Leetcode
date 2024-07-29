class Solution {
public:
    int maximum69Number (int num) {
        std::string numStr = std::to_string(num);

    // Find and replace the first occurrence of '6' with '9'
    for (char &c : numStr) {
        if (c == '6') {
            c = '9'; // Replace the first '6' with '9'
            break;   // Only change the first occurrence
        }
    }
    return std::stoi(numStr);
    }
};