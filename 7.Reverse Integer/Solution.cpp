#include <iostream>
#include <limits.h> // For INT_MAX and INT_MIN
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long digit = 0; // Use long long to handle overflow

        while (x != 0) {
            digit = digit * 10 + x % 10; // Append the last digit
            x = x / 10; // Remove the last digit from x
        }

        // Check for overflow
        if (digit > INT_MAX || digit < INT_MIN) {
            return 0;
        } else {
            return static_cast<int>(digit); // Cast back to int before returning
        }
    }
};

int main() {
    Solution number;
    cout << number.reverse(123) << endl; // Output: 321
    cout << number.reverse(-123) << endl; // Output: -321
    cout << number.reverse(120) << endl; // Output: 21
    cout << number.reverse(1534236469) << endl; // Output: 0 (overflow)
    return 0;
}
