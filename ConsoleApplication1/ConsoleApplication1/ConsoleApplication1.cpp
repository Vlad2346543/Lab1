#include <conio.h>
#include <windows.h>
#include <iostream>

int main()
{
	int a;
	std::cout << "Write a word:";
	std::cin >> a;
	std::cout << "You wrote:" << a;
	_getch();
}