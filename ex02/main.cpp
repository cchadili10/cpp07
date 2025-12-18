#include "Array.hpp"


int main()
{
   try
   {
        std::string str1[4] = {"1337" , "42", "leet", "um6p"};
        Array<int> arr(4);
        Array<std::string> str(4);

        for (size_t i = 0; i < arr.size(); i++)
        {
            arr[i] = i + 6;
            str[i] = str1[i];
        }

        for (size_t i = 0; i < arr.size(); i++)
        {
                std::cout << arr[i] << "  " ;
        }
        std::cout << std::endl;
        for (size_t i = 0; i < str.size(); i++)
        {
            std::cout << str[i] << "  ";
        }
        std::cout << std::endl;
        Array<std::string> ar(str);
        ar[0] = "test";
        ar[99] = "test";
        for (size_t i = 0; i < ar.size(); i++)
        {
            std::cout << ar[i] << "  ";
        }
   }
   catch(const std::exception& e)
   {
    std::cerr <<"error not valid index"<< '\n';
   }
   
    return 0;
}
