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
/*
Using
*/
using namespace std; /* using - removing prefixes from variables/functions from libraries
 ex. std::string var; -> string var;*/
/*
 Global variables /Function reference / inline definition 
*/
int level_decrease; // Declare global variables, use _ for var declaration/definition
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
/*
Main function space
*/
int main()
{
    // Prgoram/Code aka Spaghetti
    int local_variable; // short lived variable, value remebered only in function, cleared after use
    static int static_local_variable; // long lived variable, value remembered during whole program
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
 Work on variables
*/
std::string string_var; // string var declaration without using namespace module
char char_var;
int local_variable; // short lived variable, value remebered only in function, cleared after use
static int static_local_variable = 5; // long lived variable, value remembered during whole program
// value 5 durint declaration will be initialize only once after that state of static var is remembered 

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
int KeyPress() // Value change by key press / simple menu Esc as quit
{
int a = 0;
    while (!GetAsyncKeyState(VK_ESCAPE))
    {
        if (!HIWORD(GetKeyState(VK_UP)) && GetAsyncKeyState(VK_UP))
        {
            a++; cout << " " << a;
        }
        else if (!HIWORD(GetKeyState(VK_DOWN)) && GetAsyncKeyState(VK_DOWN))
        {
            a--; cout << " " << a;
        }
    }
return 0;
}
int MenuIncrement(int a) // dumb menu in dumb infinite loop
{
    while (5) // dumb infinite loop 
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