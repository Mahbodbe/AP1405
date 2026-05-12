#include <algorithm>
#include <chrono>
#include <iostream>
#include <string>
#include <vector>

bool containsSubstring(const std::string &text, const std::string &sub);
std::string reverseString(std::string str);
std::vector<std::string> getAllContiguousSubstrings(const std::string &str);

int main() {

    int n {};
    std::cin >> n;

    std::vector<std::string> ArrString(n);
    for (size_t i {}; i < n; i++)
        std::cin >> ArrString[i];

    // using namespace std::chrono;

    // auto start = high_resolution_clock::now();

    if (n == 0)
        return 0;

    std::string firstString = ArrString[0];
    std::vector<std::string> possibleSubstrings = getAllContiguousSubstrings(firstString);
    std::string largestCommonSubstring = "";
    std::sort(possibleSubstrings.begin(), possibleSubstrings.end(),
              [](const std::string &a, const std::string &b) {
                  if (a.length() != b.length())
                      return a.length() > b.length();
                  return a < b;
              });

    for (const std::string &sub : possibleSubstrings) {
        bool isCommonToAll = true;
        std::string reversedSub = reverseString(sub);

        for (int i = 0; i < n; i++) {
            const std::string &currentInput = ArrString[i];

            bool found = containsSubstring(currentInput, sub) ||
                         containsSubstring(currentInput, reversedSub);

            if (!found) {
                isCommonToAll = false;
                break;
            }
        }

        if (isCommonToAll) {
            largestCommonSubstring = sub;
            break;
        }
    }

    if (!largestCommonSubstring.empty())
        std::cout << largestCommonSubstring << std::endl;

    // auto end = high_resolution_clock::now();

    // auto duration = duration_cast<seconds>(end - start);

    // std::cout << "Elapsed time: " << duration.count() << " s\n";
    return 0;
}

std::vector<std::string> getAllContiguousSubstrings(const std::string &str) {
    std::vector<std::string> result;
    int n = str.length();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            result.push_back(str.substr(i, j - i + 1));
        }
    }
    return result;
}

bool containsSubstring(const std::string &text, const std::string &sub) {
    return text.find(sub) != std::string::npos;
}

std::string reverseString(std::string str) {
    std::reverse(str.begin(), str.end());
    return str;
}

