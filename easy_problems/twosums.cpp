#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i <= nums.size(); i++) {
            for (int j = i+1; j <= nums.size(); j++) {
                if (nums[j] = target - nums[i]) {
                    return {i,j};
                }
            }
        }
    }

    std::vector<int> twoSum_1(std::vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for (int i = 0; i <= nums.size(); i++) {
            hash[nums[i]] = i;
        }
        for ()
    }
};

int main()
{
    Solution new_solution;

    std::vector<int> numbers_1 = {2,7,11,15};
    int target_1 = 9;

    std::vector<int> numbers_2 = {3,2,4};
    int target_2 = 6;

    std::vector<int> numbers_3 = {3,3};
    int target_3 = 6;

    std::vector<int> return_values_1 = new_solution.twoSum(numbers_1, target_1);
    for (int num: return_values_1) {
        std::cout << num << std::endl;
    }

    std::vector<int> return_values_2 = new_solution.twoSum(numbers_2, target_2);
    for (int num: return_values_2) {
        std::cout << num << std::endl;
    }

    std::vector<int> return_values_3 = new_solution.twoSum(numbers_3, target_3);
    for (int num: return_values_3) {
        std::cout << num << std::endl;
    }
}