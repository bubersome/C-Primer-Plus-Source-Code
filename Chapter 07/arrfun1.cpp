// arrfun1.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);        // prototype
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    char name[ArSize] = {"acnjkkh"};
    // some systems require preceding int with static to
// enable array initialization

    int sum = sum_arr(& cookies[0], ArSize); //same as next line
//    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum <<  "\n";
    // cin.get();
    //print (cookies, 3);
    return 0;
}

// return the sum of an integer array
int sum_arr(int * arr, int n) //其中用int * arr替换了int arr [ ]。这证明这两个函数头都是正确的，因为在C++中，当（且仅当）用于函数头或函数原型中，int *arr和int arr [ ]的含义才是相同的。它们都意味着arr是一个int指针。
//int sum_arr(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total; 
}

void print(int arr[], int n){
    std::cout << arr[n] ;
    std::cout << *(arr +n);
    std::cout << &arr[n];
    std::cout <<arr+n ;

}
