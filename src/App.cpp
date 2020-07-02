#include <iostream>

#include "App.h"

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
            add();
        } 
        else 
        {
            add(argv[2]);
        }
    }
    else if (action == "search")
    {
        if (argc == 2)
        {
            search();
        }
        else
        {
            search(argv[2]);
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

void App::search()
{
    std::string to_search_for;

    std::cout << "Enter what are you searching: " << std::endl;
    std::getline(std::cin, to_search_for);

    search(to_search_for);
}

void App::search(const std::string& to_search_for)
{
    std::vector<Message*> messages_found = diary.search(to_search_for);

    for(auto message : messages_found)
    {
        std::cout << message->content << std::endl;
    }

    return;
}

void App::list_messages()
{
    for (size_t i = 0; i < diary.messages.size(); i++)
    {
        const Message& message = diary.messages[i];
        std::cout << "- " << message.content << std::endl;
    }
}

int App::show_usage()
{
    return 1;
}
