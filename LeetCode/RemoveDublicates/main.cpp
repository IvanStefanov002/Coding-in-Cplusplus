#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

std::pair<std::vector<int>, int> removeDuplicates(const std::vector<int>& nums) {
    std::set<int> uniqueNumbers(nums.begin(), nums.end());
    std::vector<int> result(uniqueNumbers.begin(), uniqueNumbers.end());
    int numDuplicatesDeleted = nums.size() - result.size();
    return std::make_pair(result, numDuplicatesDeleted);
}

int main() {
    std::vector<int> nums;
    std::vector<int> uniqueNumbers;
    int nDuplicatesDeleted = 0;
    int nSize = 0;
    int temp = 0;
    std::cout << "How many numbers would you insert: ";
    std::cin >> nSize;

    std::cout << "\n---Filling the vector---" << std::endl;
    for (int i = 0; i < nSize; i++) {
        std::cout << "Insert number #" << i + 1 << ": ";
        std::cin >> temp;
        nums.push_back(temp);
    }

    std::cout << "\n---Input vector---\n[ ";
    for (int e : nums) {
        std::cout << e << ", ";
    }
    std::cout << "\b\b ]" << std::endl;

    // Sort input vector
    std::sort(nums.begin(), nums.end());

    // Delete duplicates
    std::pair<std::vector<int>, int> result = removeDuplicates(nums);
    uniqueNumbers = result.first;
    nDuplicatesDeleted = result.second;

    std::cout << "\n---Output vector---\n[ ";
    for (int i = 0; i < uniqueNumbers.size(); i++) {
        std::cout << uniqueNumbers[i];
        if (i != uniqueNumbers.size() - 1) {
            std::cout << ", ";
        }
    }
    for (int i = 0; i < nDuplicatesDeleted; i++) {
        std::cout << ", _";
    }
    std::cout << " ]" << std::endl;

    return 0;
}
