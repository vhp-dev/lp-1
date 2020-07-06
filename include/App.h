#ifndef APP_H
#define APP_H

#include "Diary.h"
#include "Menu.h"

#include <string>

struct App
{
    App(const std::string& filename);

    Diary diary;
    Menu menu;
    int run(int argc, char* argv[]);
    void show_usage(const std::string &program_name);
    void add();
    void add(const std::string message);
    void search();
    void search(const std::string& to_look_for);
    void list_messages();
    void list_messages(const std::string format);
};

#endif