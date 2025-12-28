#pragma once

#include <cstddef>
#include <iostream>

template <typename T> void print(const T value)
{
    std::cout << value << std::endl;
}

template <typename T>
void increment(T &value)
{
    value++;
}

template <typename Ta, typename Tf>
void iter(Ta *ad, const size_t len, Tf fun)
{
    for (size_t i = 0; i < len; i++)
    {
        fun(ad[i]);
    }
}