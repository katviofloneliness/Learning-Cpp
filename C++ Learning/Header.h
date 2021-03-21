#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <windows.h>
#include <winUser.h>
#include <cctype>

void Alarm(int, int = 10);
int MenuIncrement(int);
void DecToBin(int);
int Fibonacci(int, int, static int);

constexpr long long Factorial(int factorial) // Factorial
{
    return factorial > 0 ? factorial * Factorial(factorial - 1 ) : 1;
}

constexpr double ToPower(double x, int n) // Dumb power math
{
    return n <= 0 ? 1 : ToPower(x, --n)*x;
}

constexpr double SinTaylorSeries(double x) // Dumb Sinus Based on Taylor Series
{
    return x
        - ToPower(x, 3) / Factorial(3)
        + ToPower(x, 5) / Factorial(5)
        - ToPower(x, 7) / Factorial(7)
        + ToPower(x, 9) / Factorial(9);
            
}
constexpr double DegToRad(double degree) // Degs to rads
{
    return 3.14159265 * degree / 180;
}