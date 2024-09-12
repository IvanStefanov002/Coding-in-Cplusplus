#include <iostream>
#include <unordered_map>

void printNewLine() {
    std::cout << "\n";
}

int main() {
    std::unordered_map<char, int> mStorage = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    std::string sInput("");
    int nYear = 0;
    int prevValue = 0;

    printNewLine();
    std::cout << "---Given storage of details---" << std::endl;
    for(const auto& pair : mStorage){
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
    printNewLine();
    std::cout << "---String insertion---" << std::endl;
    std::cout << "Input Roman numeral: ";
    std::getline(std::cin, sInput);
    printNewLine();

    for (int i = sInput.size() - 1; i >= 0; --i) {
        char c = sInput[i];
        auto iter = mStorage.find(c);
        if (iter != mStorage.end()) {
            int currValue = iter->second;
            if (currValue < prevValue) {
                nYear -= currValue;
            }else {
                nYear += currValue;
                prevValue = currValue;
            }
        } else {
            std::cout << "---Results---";
            std::cout << "Invalid Roman numeral: " << c << std::endl;
            return 0;
        }
    }
    std::cout << "---Results---" << std::endl;
    std::cout << sInput << " refers to: " << nYear << " after calculation." << std::endl;
    return 0;
}
