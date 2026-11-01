#include <iostream>
#include <string>
#include <windows.h>


int main(int argc, char** argv)
{
	std::string str1{};
	std::string str2{};

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::cout << "Введите имя: ";
	std::cin >> str1;

	std::cout << "Введите фамилию: ";
	std::cin >> str2;

	std::cout << "Здравствуйте, " << str1 + " " + str2 << "!";


	return(0);
}

