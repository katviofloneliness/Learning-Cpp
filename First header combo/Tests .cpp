#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <windows.h>
#include <winUser.h>
#include "Header.h"

using namespace std;



int main()
{
    int a = 0;
    int b = 5;
    /*
    while (!GetAsyncKeyState(VK_ESCAPE))
    {      
        if (!HIWORD(GetKeyState(VK_UP))  && GetAsyncKeyState(VK_UP)   ) 
        {
        a++; cout << " " << a; 
        }
        else if (!HIWORD(GetKeyState(VK_DOWN)) && GetAsyncKeyState(VK_DOWN)) 
        {
        a--; cout << " " << a; 
        }  
    }
    */
    b = MenuIncrement(a);
    Alarm(b);
    Alarm(MenuIncrement(a));
    return 0;
}

