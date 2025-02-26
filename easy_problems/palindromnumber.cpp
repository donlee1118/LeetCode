#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int remainder = x % 10;
        int divided_int = x / 10;
        
        
    }
};

int main(){
    std::cout << Solution.isPalindrome(121) << std::endl;
}