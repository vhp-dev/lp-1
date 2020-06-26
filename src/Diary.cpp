#include "../include/Diary.h"

#include <iostream>

Diary::Diary(const std::string& filename) : 
    filename("myfile"),
    messages(nullptr),
    messages_size(0),
    messages_capacity(10)
{
    messages = new Message[messages_capacity]; //Always initialize (new) inside a class constructor
    messages_capacity = 10;
}

Diary::~Diary()
{
    delete[] messages;
}

void Diary::add(const std::string& message)
{
    if (messages_size == messages_capacity)
        return;

    Message msg;
    msg.content = message;
    msg.date.set_from_string(get_current_date());
    msg.time.set_from_string(get_current_time());

    messages[messages_size] = msg;
    messages_size++;


}

void Diary::write()
{

}