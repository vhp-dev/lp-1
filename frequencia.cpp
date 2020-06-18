#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &program_name)
{
        std::cout << "Use: " << program_name << " add <message>" << std::endl;
}

int main(int argc, char *argv[])
{
    std::ifstream MyFileIn("MyFile.txt");
    std::ofstream MyFileOut("MyFile.txt", std::ios::app);

    if (!MyFileIn.is_open()) 
    {
        std::cerr << "Arquivo não existente ou sem permissão de leitura." << std::endl;
        return -1;
    }

    if (argc == 1)
    {
        show_usage(argv[0]);
        return -1;
    }
    
    std::string action = argv[1];
    std::string message;
    
    if (argc == 2)
    {
        if ( action == "list")
        {
            int enumeration = 0;
            while (!MyFileIn.eof())
            {
                enumeration++;
                std::getline(MyFileIn, message);
                if (message.size() == 0)
                    continue;
                std::cout << enumeration << ". " << message << std::endl;
            }
            return 0;
        }
        else if (action == "add")
        {
            std::cout << "Type a message: ";
            getline(std::cin, message);
            MyFileOut << message << std::endl;
        }
        else
        {
            show_usage(argv[0]);
            return -1;
        }
    }
    else
    {
        message = argv[2];
        MyFileOut << message << std::endl;
    }
    
    std::cout << "Message added" << std::endl;

    MyFileIn.close();
    MyFileOut.close();

    return 0;
}