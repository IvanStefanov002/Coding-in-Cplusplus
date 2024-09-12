#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numToIndex;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return {numToIndex[complement], i};
        }
        numToIndex[nums[i]] = i;
    }

    return {}; // Return an empty vector if no solution is found
}

int main() {
    std::vector<int> nums = {2, 2, 2, 2, 2, 7};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    std::cout << "[";
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
