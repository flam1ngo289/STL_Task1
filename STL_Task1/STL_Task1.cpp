#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    
    std::string input;
    std::cout << "[IN]: ";
    std::getline(std::cin, input);

    
    std::map<char, int> frequency;
    for (char c : input) {
        frequency[c]++;
    }

    std::vector<std::pair<char, int>> sortedFrequency(frequency.begin(), frequency.end());

    
    std::sort(sortedFrequency.begin(), sortedFrequency.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
        return b.second < a.second; 
        });

    std::cout << "[OUT]: ";
    for (const auto& p : sortedFrequency) {
        std::cout << p.first << ": " << p.second << std::endl;
    }

    return 0;
}
