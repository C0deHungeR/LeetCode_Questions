#include<iostream>
#include<limits.h>
using namespace std ;

class Solution {
public:
int reverse(int x) {
        long long digit = 0; // Use long long to handle overflow

        while (x != 0) {
            digit = digit * 10 + x % 10; // Append the last digit
            x = x / 10; // Remove the last digit from x
        }

        // Check for overflow
        if (digit > INT_MAX || digit < 0) {
            return 0;
        } else {
            return static_cast<int>(digit); 
        }
    }
    bool isPalindrome(int x) {
        return x == reverse(x);
    }
};

int main(){
    Solution Number; 
    cout<<Number.isPalindrome(121)<<endl;
    cout<<Number.isPalindrome(222)<<endl;
    cout<<Number.isPalindrome(0)<<endl;
    cout<<Number.isPalindrome(-121)<<endl;
}