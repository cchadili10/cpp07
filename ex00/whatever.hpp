#pragma once

#include <iostream>

template <typename T> void swap(T &a, T &b)
{
    T x = a;
    a = b;
    b = x;
}

template <typename T> T max(T a, T b)
{
    if(a > b)
        return a;
    return b;
}


template <typename T> T min(T a, T b)
{
    if (a < b) 
        return a;
    return b;
}