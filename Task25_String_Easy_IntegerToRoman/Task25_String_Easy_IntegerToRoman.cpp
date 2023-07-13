#include <iostream>
#include <string>

class Solution {
public:
    static std::string intToRoman(int num) {
        std::string result;
        if (num >= 1000) {
            result.append(std::string(num / 1000, 'M'));
            num -= (num / 1000) * 1000;
        }
        if (num >= 500) {
            if (num >= 900) {
                num -= 900;
                result.append("CM");
            }
            else {
                result.push_back('D');
                num -= 500;
            }
        }
        if (num >= 100) {
            if (num >= 400) {
                result.append("CD");
                num -= 400;
            }
            else {
                result.append(std::string(num / 100, 'C'));
                num -= (num / 100) * 100;
            }
        }
        if (num >= 50) {
            if (num >= 90) {
                result.append("XC");
                num -= 90;
            }
            else {
                result.push_back('L');
                num -= 50;
            }
        }
        if (num >= 10) {
            if (num >= 40) {
                result.append("XL");
                num -= 40;
            }
            else {
                result.append(std::string(num / 10, 'X'));
                num -= (num / 10) * 10;
            }
        }
        if (num >= 5) {
            if (num == 9) {
                result.append("IX");
                num -= 9;
            }
            else {
                result.push_back('V');
                num -= 5;
            }
        }
        if (num == 4) {
            result.append("IV");
        }
        else {
            result.append(std::string(num, 'I'));
        }
        return result;
    }
};

int main()
{
    std::cout << Solution::intToRoman(1994);
}
