#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &program_name)
{
        std::cout << "Use: " << program_name << " add <message>" << std::endl;
}

int main(int argc, char *argv[])
{
    std::ofstream end_file("file.txt", std::ios::app);

    if (argc == 1)
    {
        show_usage(argv[0]);
        return -1;
    }
    
    std::string action = argv[1];
    
    if (action != "add")
    {
        show_usage(argv[0]);
        return -1;
    }
    
    std::string message;
    
    if (argc == 2)
    {
        std::cout << "Type a message: ";
        getline(std::cin, message);
        end_file << message << std::endl;
    }
    else
    {
        message = argv[2];
        end_file << message << std::endl;
    }
    
    std::cout << "Message added" << std::endl;

    end_file.close();

    return 0;
}