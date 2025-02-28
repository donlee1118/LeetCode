#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10; // 0 * 10 + 1 = 1; 1*10 + 2 = 12
            x /= 10; // 12; 1
            std::cout << x << std::endl;
            std::cout << revertedNumber << std::endl;
        }
        return x == revertedNumber || x == revertedNumber/10;
    }
};

int main(){
    Solution palindrome_class;
    std::cout << palindrome_class.isPalindrome(121) << std::endl;
    std::cout << palindrome_class.isPalindrome(7329) << std::endl;
}