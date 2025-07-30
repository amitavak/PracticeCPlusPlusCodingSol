#pragma once
#include <vector>

#ifdef PRACTICECPLUSPLUSCODE_EXPORTS
#define FINDMAXNUMBER_API __declspec(dllexport)
#else
#define FINDMAXNUMBER_API __declspec(dllimport)
#endif

class FINDMAXNUMBER_API FindMaxNumber
{
public:
    // Find the maximum integer from a given array of integers using C-style array
    static int findMax(const int* array, size_t size);
};