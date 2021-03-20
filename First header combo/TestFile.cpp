#include <iostream>

#include "Header.h"

using namespace std;

void Alarm(int level, int exit )
{
    cout << "Alarm level: " << level << ". Move to exit num " << exit << endl;
}

int MenuIncrement(int a)
{
    while (/*HIWORD(GetKeyState(VK_LEFT)) == 0 && HIWORD(GetAsyncKeyState(VK_LEFT)) == 0
        && !LOWORD(GetAsyncKeyState(VK_LEFT))*/5)
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