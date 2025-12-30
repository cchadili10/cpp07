#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr(4);
        for (size_t i = 0; i < arr.size(); i++)
        {
            arr[i] = i + 6;
        }
        for (size_t i = 0; i < arr.size(); i++)
        {
            std::cout << arr[i] << std::endl;
        }
        arr[0] = 99;
        arr[99] = 0;
        for (size_t i = 0; i < arr.size(); i++)
        {
            std::cout << arr[i] << " ";
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error " << e.what() << '\n';
    }

    try
    {
        std::string str1[4] = {"1337", "42", "leet", "um6p"};
        Array<std::string> str(4);
        for (size_t i = 0; i < str.size(); i++)
        {
            str[i] = str1[i];
        }
        for (size_t i = 0; i < str.size(); i++)
        {
            std::cout << str[i] << std::endl;
        }
        str[1] = "test";
        str[4] = "test";
        for (size_t i = 0; i < str.size(); i++)
        {
            std::cout << str[i] << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error " << e.what() << '\n';
    }

    return 0;
}
