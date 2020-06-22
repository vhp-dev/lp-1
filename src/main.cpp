#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <string>
#include "../usage.h"

std::string format_current_date(const std::string& format)
{
    std::time_t time = std::time(nullptr);
    char result[1024];
    std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));
    return std::string(result);
}
std::string get_current_date()
{
    return format_current_date("%d/%m/%Y");
}
    std::string get_current_time()
{
    return format_current_date("%H:%M:%S");
}


void show_usage(const std::string &program_name)
{
        std::cout << "Use: " << program_name << " add <message>" << std::endl;
        std::cout << "Use: " << program_name << " list" << std::endl;
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
    std::string word;
    std::string wholeLine;
    bool dateFlag = false;
    std::string todaysDate = get_current_date();
    
    while ( MyFileIn >> word )
    {
        if ( word == todaysDate )
        {
            dateFlag = true;
            break;
        }
    }

    if (!dateFlag)
    {
        MyFileOut << "\n" << "# " << todaysDate << "\n" << std::endl;
    }

    if (argc == 2)
    {
        if ( action == "list")
        {
            MyFileIn.clear();
            MyFileIn.seekg(0, std::ios::beg);
            while ( !MyFileIn.eof())
            {
                std::getline( MyFileIn, wholeLine );
                if ( wholeLine[0] != '#')
                {
                    if ( wholeLine.size() == 0 )
                        continue;
                    {
                        std::cout << wholeLine << std::endl;
                    } 
                }
            }
            return 0;
        }
        else if (action == "add")
        {
            std::cout << "Type a message: ";
            getline( std::cin, wholeLine );
            MyFileOut << "- " << get_current_time() << " " << wholeLine << std::endl;
        }
        else
        {
            show_usage(argv[0]);
            return -1;
        }
    }

    if ( argc > 2 )
    {
        if (action != "add")
        {
            show_usage(argv[0]);
            return -1;
        }
        
        wholeLine = argv[2];
        MyFileOut << "- " << get_current_time() << " " << wholeLine << std::endl;
    }
    
    std::cout << "Message added" << std::endl;

    MyFileIn.close();
    MyFileOut.close();

    return 0;
}