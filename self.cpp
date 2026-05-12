/* import std;

int main(){
    int answer {42};
    std::println("The answer to life, the universe, and everything is {}." answer);
    return 0;
}
   gcc++23 above not mine */ 

#include <iostream>

int main() {
    int answer{42};
    std::cout << "The answer to life, the universe, and everything is " << answer << std::endl;
    std::cout << std::format("The answer to life, the universe, and everything is {}." , answer) << std::endl; // c++20 above
    return 0;
} 
    


/*  import std;

int main(){
    int answer {42};
    std::println("The answer to {} is {:!^12b}", "the ultimate question", answer);
    return 0;
}
    gcc++23 above not mine */


/* 
#include <iostream>
#include <string>
#include <bitset>

int main() {
    int answer = 42;

    std::string bin = std::bitset<32>(answer).to_string();

    bin.erase(0, bin.find_first_not_of('0'));

    int width = 12;
    int pad = width - bin.size();
    int left = pad / 2;
    int right = pad - left;

    std::string formatted = std::string(left, '!') + bin + std::string(right, '!');

    std::cout << "The answer to " << "the ultimate question" << " is "<< formatted << "\n";

    return 0;
}
    */


