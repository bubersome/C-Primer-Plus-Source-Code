#include "vector"
#include "iostream"
#include "string"

using namespace std;

void reverseString(vector<string>& s) {
    for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
        swap(s[i],s[j]);
    }
}

int main(){
//    string abcd;
//    string r = abcd;
    vector<string> a  {"a","b","c"};
//    reverseString(vector<char>& (a));
    reverseString(a);
    cout << reverseString <<endl;
//    cout << "dd";
    return 0;
}