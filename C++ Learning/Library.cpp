/*
// Library
*/
/* 
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
using namespace std; /* using - removing prefixes from variables/functions
 ex. std::string var; -> string var;*/
/*
 Function reference
*/
void Alarm(int level, int exit); // Reference to function after the main programs
/*
Main function space
*/
int main()
{
// Program aka Spaghetti
}
/*
 Auxilary functions space
*/
void Alarm(int level, int exit)
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