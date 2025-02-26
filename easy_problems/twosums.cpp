#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i <= nums.size(); i++) {
            for (int j = i+1; j <= nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i,j};
                }
            }
        }
        return {};
    }

    std::vector<int> twoSum_hashtwopass(std::vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for (int i = 0; i <= nums.size(); i++) {
            hash[nums[i]] = i; // for the first example, it would be {2,7,11,15} would be assigned with {1,2,3,4}
        }
        for (int i = 0; i <= nums.size(); i++) {
            int complement = target - nums[i]; // takes the difference
            if (hash.find(complement) != hash.end() && hash[complement] != i) { // hash.find finds the index and checks if there is an element in the set. Checks for uniqueness
                return {i, hash[complement]};
            }
        }
        return {};
    }

    std::vector<int> twoSum_hashonepass(std::vector<int>& nums, int target){
        unordered_map<int, int> hash;
        for (int i = 0; i <= nums.size(); i++) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end() && hash[complement] != i) {
                return {i, hash[complement]};
            }
            hash[nums[i]] = i;
        }
        return {};
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

    std::vector<int> numbers_4 = {2,7,11,15};
    int target_4 = 9;

    std::vector<int> numbers_5 = {3,2,4};
    int target_5 = 6;

    std::vector<int> numbers_6 = {3,3};
    int target_6 = 6;
    
    std::vector<int> return_values_4 = new_solution.twoSum_hashtwopass(numbers_4, target_4);
    for (int num: return_values_4) {
        std::cout << num << std::endl;
    }

    std::vector<int> return_values_5 = new_solution.twoSum_hashtwopass(numbers_5, target_5);
    for (int num: return_values_5) {
        std::cout << num << std::endl;
    }

    std::vector<int> return_values_6 = new_solution.twoSum_hashtwopass(numbers_6, target_6);
    for (int num: return_values_6) {
        std::cout << num << std::endl;
    }

    std::vector<int> numbers_7 = {2,7,11,15};
    int target_7 = 9;

    std::vector<int> numbers_8 = {3,2,4};
    int target_8 = 6;

    std::vector<int> numbers_9 = {3,3};
    int target_9 = 6;
    
    std::vector<int> return_values_7 = new_solution.twoSum_hashtwopass(numbers_7, target_7);
    for (int num: return_values_7) {
        std::cout << num << std::endl;
    }

    std::vector<int> return_values_8 = new_solution.twoSum_hashtwopass(numbers_8, target_8);
    for (int num: return_values_8) {
        std::cout << num << std::endl;
    }

    std::vector<int> return_values_9 = new_solution.twoSum_hashtwopass(numbers_9, target_9);
    for (int num: return_values_9) {
        std::cout << num << std::endl;
    }

}