#include <iostream>
#include <sstream>

#include "App.h"

App::App(const std::string &filename) : diary(filename)
{
}

int App::run(int argc, char *argv[])
{
    if (argc == 1)
    {
        show_usage(argv[0]);
        return -1;
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
        if (argc == 2)
        {
            list_messages();
        }
        else
        {
            list_messages(argv[2]);
        }
    }
    else if (action == "interactive")
    {
        do
        {
            menu.display();

            std::cin >> menu.option;

            if (menu.option == 1)
                list_messages();
            else if (menu.option == 2)
                add();
            else if (menu.option == 3)
                search();

        } while (menu.option != 0);
    }
    else
    {
        show_usage(argv[0]);
        return -1;
    }

    return 0;
}

void App::add()
{
    std::string message;

    std::cout << "Enter your message: " << std::endl;
    std::cin.ignore();
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
    std::cin.ignore();
    std::getline(std::cin, to_search_for);

    search(to_search_for);
}

void App::search(const std::string &to_search_for)
{
    std::vector<Message *> messages_found = diary.search(to_search_for);

    for (auto message : messages_found)
    {
        std::cout << message->content << std::endl;
    }

    return;
}

void App::list_messages()
{
    list_messages(diary.default_format);
}

void App::list_messages(const std::string format)
{
    diary.default_format = format;

    for (size_t i = 0; i < diary.messages.size(); i++)
    {
        size_t j = 0;
        std::stringstream stream_analyze(diary.default_format);
        std::stringstream stream_to_print;

        while (j < diary.default_format.size())
        {
            if (diary.default_format[j] == '%' and diary.default_format[j + 1] != diary.default_format[diary.default_format.size()])
            {
                if (diary.default_format[j + 1] == 'd')
                {
                    stream_to_print << diary.messages[i].date.to_string();
                    j += 2;
                }
                else if (diary.default_format[j + 1] == 't')
                {
                    stream_to_print << diary.messages[i].time.to_string();
                    j += 2;
                }
                else
                {
                    stream_to_print << diary.messages[i].content;
                    j += 2;
                }
            }
            else
            {
                stream_to_print << diary.default_format[j];
                j++;
            }
        }

        std::cout << stream_to_print.str() << std::endl;
    }
}

void App::show_usage(const std::string &program_name)
{
    std::cout << "Use: " << program_name << " add" << std::endl;
    std::cout << "Use: " << program_name << " add <message>" << std::endl;
    std::cout << "Use: " << program_name << " list" << std::endl;
    std::cout << "Use: " << program_name << " list <customized format>" << std::endl;
    std::cout << "Use: " << program_name << " search" << std::endl;
    std::cout << "Use: " << program_name << " search <customized search>" << std::endl;
    std::cout << "Use: " << program_name << " interactive" << std::endl;
}
