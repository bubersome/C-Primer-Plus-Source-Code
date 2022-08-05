#include <vector>
#include <string>

class Solution {
public:
    static void reverseString(std::vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
            std::swap(s[i],s[j]);
        }
    }
};

int main() {
//    std::vector<char>() s;
    s = "jaguar";
    Solution::reverseString(s);
}