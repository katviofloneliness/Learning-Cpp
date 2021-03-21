/*
// Library
*/
/* 
Simple program template
//*************************************************************************************************
Preprocessor
*/
#include <iostream>
#include <string>
#include <vector>// reference to library vector / preprocessor
#include <cstdio>
#include <windows.h>
#include <winUser.h>
#include <cctype>
#include "Header.h"
/*
Using
*/
using namespace std; /* using - removing prefixes from variables/functions from libraries
 ex. std::string var; -> string var;*/
/*
 Global variables /Function reference / inline definition 
*/
int level_increase;
int level_decrease = 5; // Declare global variables, use _ for var declaration/definition
void Alarm(int level, int exit); // Reference (declaration) to function after the main program
inline void InlineAlarm(int level, int exit = 7) // Definition of function declared before main 
// int exit = 7 - sets default value in case of missing parameter. In order from right to left Alarm(a);
// inline - prefix - removes calls for short function - faster code execution with short functions
// called multiple times in project. Has to be defined "on top" / in Header files 
// Use Upper Cases for function names InlineAlarm
{
    cout << "Alarm level: " << level - level_decrease<< ". Move to exit num " << exit << endl;
    // level_decrease has to be declared before as global variable to be used in SubFunctions
}
constexpr int square_const = 5 * 5; // constexpr prefix used to calculate expresions known before compiling
constexpr int SquareConst(int a) { return a * a; }// can be used for functions 
//have to be on top of program or in header file 
// if used for non constant expresions it will behave like regular function calculated during compiling
constexpr long long Factorial(int factorial) // Factorial in recurency in constexpr
{
    return factorial > 0 ? factorial * Factorial(factorial - 1) : 1;
}
/* constexpr Factorial means \/
* long long Factorial (int factorial)
* {
* if(factorial > 0)
*   return factorial * Factorial(factorial - 1);
* else
*   return 1; 
* }
*/
/*
Main function space
*/
int main()
{
    // Prgoram/Code aka Spaghetti
    int local_variable; // short lived variable, value remebered only in function, cleared after use
    static int static_local_variable; // long lived variable, value remembered during whole program
    SquareConst(square_const); // = 25*25 ; constexpr is calculated before compilation
    SquareConst(level_increase); // = level_increase * level_increase / works as regular function 
}
/*
 Auxilary functions space
*/
void Alarm(int level, int exit = 7) // Definition of function declared before main 
// int exit = 7 - sets default value in case of missing end parameter Alarm(a);
    {
    cout << "Alarm level: " << level << ". Move to exit num " << exit << endl;
    }
//*************************************************************************************************
/*
Definitions / functions / calls / operations / knowledge
*/
/*
Operators:
*/
return level_decrease < level_increase ? true : false; // ?: >> if (d<i) return true; else return false;
/*
 Work on variables
*/
std::string string_var; // string var declaration without using namespace module
char char_var;
int local_variable; // short lived variable, value remebered only in function, cleared after use
static int static_local_variable = 5; // long lived variable, value remembered during whole program
// value 5 durint declaration will be initialize only once after that state of static var is remembered 
constexpr int square_const = 5 * 5; // constexpr prefix used to calculate expresions known before compiling
constexpr int SquareConst(int a) { return a * a; }// can be used for functions / top of program
inline void InlineAlarm(int level, int exit = 7) // Definition of function declared before main 
// int exit = 7 - sets default value in case of missing parameter in order from right to left Alarm(a);
// inline - prefix - removes calls for short function - faster code execution with short functions
// has to be defined "on top" / Header files
{
    cout << "Alarm level: " << level << ". Move to exit num " << exit << endl;
}
/*
Code examples
*/
int MenuIncrement(int a) // Value change on button press / Dumb menu
{
    while (5) // Dumb menu in dumb loop
    {
        if (!HIWORD(GetKeyState(VK_ESCAPE)) && GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
        if (!HIWORD(GetKeyState(VK_UP)) && GetAsyncKeyState(VK_UP))
        {
            a++; cout << " " << a;
        }
        if (!HIWORD(GetKeyState(VK_DOWN)) && GetAsyncKeyState(VK_DOWN))
        {
            a--; cout << " " << a;
        }
    }
    return a;
}
void DecToBin(int number) // Changes integer decimal to binary (recurence)
{
    int change = number % 2;
    if (number > 1)
    {
        DecToBin(number / 2);
    }
    cout << change;
    return;
}
void Fibonacci(int first, int second, static int counter) // Sum of two previous numbers 
// Fibonacci for counter <=0 for 30 numbers / returns requested number
{
    if ((first == 0 and second == 0) or counter <= 0) { first = 0, second = 1, counter = 30; }
    if (counter == 1) { cout << first << " "; }
    else if (counter == 2) { cout << first << " " << second << " "; }
    else if (counter >= 2)
    {
        int sum = first + second;
        cout << first << " ";
        first = second;
        second = sum;
        Fibonacci(first, second, --counter);
    }
}
