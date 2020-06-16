#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
    std::string mensagem;
    
    if (argc == 1)
    {
        std::cout << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
        return -1;
    }
    
    if (!strcmp(argv[1],"add") && argc < 3)
    {
        std::cout << "Digite uma mensagem: ";
        getline(std::cin, mensagem);
        std::cout << mensagem << std::endl;
    }
    else
    {
        std::cout <<  argv[2] << std::endl;
    }

    return 0;
}