#include "../usage.h"
#include <iostream>

void show_usage(const std::string &program_name)
{
        std::cout << "Use: " << program_name << " add <message>" << std::endl;
        std::cout << "Use: " << program_name << " list" << std::endl;
}