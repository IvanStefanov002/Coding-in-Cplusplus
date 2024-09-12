#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

double calculate(int nNumber1, int nNumber2, char cOperator) {
    std::vector<char> vOperatorOptions = {'+', '-', '*', '/', '%'};
    bool bFlag = true;
    
    auto it = std::find(vOperatorOptions.begin(), vOperatorOptions.end(), cOperator);
    if (it != vOperatorOptions.end()) {
        bFlag = false;
    }
    
    if (!bFlag) {
        switch (cOperator) {
            case '+':
                return (nNumber1 + nNumber2);
            case '-':
                return (nNumber1 - nNumber2);
            case '*':
                return (nNumber1 * nNumber2);
            case '/':
                return (nNumber1 / nNumber2);
            case '%':
                return (nNumber1 % nNumber2);
        }
    } else {
        std::cout << "Invalid operator" << std::endl;
    }
}

int main() {
    int nNumber1 = 0;
    int nNumber2 = 0;
    char cOperator;

    std::cout << "Insert number 1: ";
    std::cin >> nNumber1;

    std::cout << "Insert number 2: ";
    std::cin >> nNumber2;

    std::cout << "Insert the operator: ";
    std::cin >> cOperator;

    std::cout << "---The output is---" << std::endl;
    double preAnswer = 0;
    preAnswer = calculate(nNumber1, nNumber2, cOperator);
    if (!std::isnan(preAnswer)) {
        std::cout << "[" << preAnswer << "]" << std::endl;
    }
    return 0;
}
