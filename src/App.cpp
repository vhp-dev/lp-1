#include <iostream>

#include "../include/App.h"

App::App(const std::string& filename) : diary(filename)
{

}

int App::run(int argc, char* argv[])
{
    if (argc == 1)
    {
        return show_usage();
    }

    std::string action = argv[1];

    if (action == "add")
    {
        if (argc == 2)
        {
            // add();

            // Adicionar 10 msg no array alocado para ter 10 msgs.
            diary.add("teste1");
            diary.add("teste2");
            diary.add("teste3");
            diary.add("teste4");
            diary.add("teste5");
            diary.add("teste6");
            diary.add("teste7");
            diary.add("teste8");
            diary.add("teste9");
            diary.add("teste10");
        } 
        else 
        {
            add(argv[2]);
        }
    }
    else if (action == "list")
    {
        list_messages();
    }
    else
    {
        return show_usage();
    }

    for(int i = 0; i < diary.messages_size; i++) // Pra testar se todas 10 msg forar armazenadas no array
    {
        std::cout << diary.messages->content << std::endl;
        diary.messages++;
    }

    return 0;
}

void App::add()
{
    std::string message;
    std::cout << "Enter your message: " << std::endl;
    std::getline(std::cin, message);

    add(message);
}

void App::add(const std::string message)
{
    diary.add(message);
    diary.write();
}

void App::list_messages()
{
    for (size_t i = 0; i < diary.messages_size; i++)
    {
        const Message& message = diary.messages[i];
        std::cout << "- " << message.content << std::endl;
    }
}

int App::show_usage()
{
    return 1;
}
