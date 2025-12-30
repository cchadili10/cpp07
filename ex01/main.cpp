#include "iter.hpp"


int main()
{
    int arr [5] = {3,6,7,8,2};
    iter(arr, sizeof(arr), increment<int>);
    iter(arr, 5,print<int>);
    const std::string str[3] = {"1337", "42", "leet"};
    iter(str, (sizeof(str) / sizeof(str[0])), print<std::string>);


    std::cout << sizeof(arr) << " " << sizeof(str) << " " << sizeof(str[2]) << "\n";
}
