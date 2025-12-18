#include "iter.hpp"


int main()
{
    int arr [5] = {3,6,7,8,2};
    iter(arr, 5, increment<int>);
    iter(arr, static_cast<size_t>(5), print<int>);
    std::string str[3] = {"1337", "42", "leet"};
    iter(str, 3,print<std::string>);
}
