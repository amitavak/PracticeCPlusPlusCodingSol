#include "pch.h"
#include "FindMaxNumber.h"
#include <algorithm>
#include <stdexcept>

int FindMaxNumber::findMax(const int* array, size_t size)
{
    if (array == nullptr || size == 0)
    {
        throw std::invalid_argument("Array cannot be null or empty");
    }
    
    int maxValue = array[0];
    for (size_t i = 1; i < size; ++i)
    {
        if (array[i] > maxValue)
        {
            maxValue = array[i];
        }
    }
    
    return maxValue;
}