#include <Menu.h>

#include <iostream>

Menu::Menu() : option(0)
{
}

void Menu::display()
{
    std::cout << "============================================" << std::endl;

    std::cout << "Diary v1.0" << std::endl;

    std::cout << "============================================" << std::endl;


    std::cout << "Select an option: " << std::endl;

    std::cout << "1) List messages" << std::endl;
    std::cout << "2) Add new message" << std::endl;
    std::cout << "3) Search for a message" << std::endl;

    std::cout << "============================================" << std::endl;

    std::cout << "0) Exit" << std::endl;

    std::cout << "============================================" << std::endl;
}