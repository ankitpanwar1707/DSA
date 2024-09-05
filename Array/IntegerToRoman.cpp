#include <iostream>
#include <string>
#include <vector>

using namespace std;

string intToRoman(int num) {
    // Define the Roman numeral values and symbols
    vector<pair<int, string>> romanMap = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };
    
    string roman;
    
    // Iterate through the vector of Roman numeral values
    for (const auto& [value, symbol] : romanMap) {
        while (num >= value) { // The number of iterations of this loop depends on the value and num
            roman += symbol;
            num -= value;
        }
    }
    
    return roman;
}

int main() {
    int num = 1994; // Example number
    cout << "The Roman numeral for " << num << " is " << intToRoman(num) << endl;
    return 0;
}
