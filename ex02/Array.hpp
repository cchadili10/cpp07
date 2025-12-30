#pragma once

#include <iostream>
#include <exception>

template <typename T> class Array
{
    private:
        T *data;
        size_t n;
    public:
        Array() : data(NULL), n(0) {}
        Array(unsigned int num) : data(new T[num]), n(num) {}
        Array(const Array &other) : data(NULL),n(other.n)
        {
            if(n > 0)
            {
                data = new T[n];
                for (size_t i = 0; i < n; i++)
                {
                    data[i] = other.data[i];
                }
            }
        }
        Array &operator = (const Array &other)
        {
            if (this != &other)
            {
                delete[] data;
                n = other.n;
                if (n > 0)
                    data = new T[other.n];
                else
                    data = NULL;
                for (size_t i = 0; i < n; i++)
                {
                    data[i] = other.data[i];
                }
            }
            return *this;
        }

        T &operator[](size_t index)
        {
            if (index >= n)
                throw std::range_error("not valid index");
            return data[index];
        }

        T operator[](size_t index) const
        {
            if (index >= n)
                throw std::range_error("not valid index");
            return data[index];
        }

        size_t size() const {return n;}
        
        ~Array(){delete[] data;};
};
