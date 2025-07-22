#pragma once

#ifdef PRACTICECPLUSPLUSCODE_EXPORTS
#define MATH_API __declspec(dllexport)
#else
#define MATH_API __declspec(dllimport)
#endif

class MATH_API Math
{
public:
    // Simple add method that takes two integers and returns their sum
    static int add(int a, int b);
    
    // Overloaded add method for double values
    static double add(double a, double b);
};