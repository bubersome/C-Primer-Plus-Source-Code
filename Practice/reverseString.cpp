#include "vector"
#include "iostream"
#include "string"

using namespace std;

void reverseString(vector<char>& s) {
    for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
        swap(s[i],s[j]);
    }
}

int main(){
//    string abcd;
//    string r = abcd;
    string a = "abcd";
//    reverseString(vector<char>& (a));
//    reverseString(a);
    cout << a <<endl;
    cout << "dd";
    return 0;
}