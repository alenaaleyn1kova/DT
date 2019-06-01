#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	time_t seconds = time(NULL); // число секунд, прошедших с 01.01.1970 - можно вообще обойтись без класса DateTime
    cout << "Количество прошедших секунд с 01.01.1970: " << seconds << endl; 
}
