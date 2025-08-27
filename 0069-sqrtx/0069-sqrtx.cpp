class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        long long start = 0, end = x, ans = 0;

        while (start <= end) {
            long long mid = start + (end - start) / 2;

            if (mid * mid == x)
                return mid;          // perfect square
            else if (mid * mid < x) {
                ans = mid;           // store last valid
                start = mid + 1;     // search right
            } else {
                end = mid - 1;       // search left
            }
        }

        return ans;
    }
};
