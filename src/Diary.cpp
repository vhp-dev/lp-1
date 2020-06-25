#include "../include/Diary.h"
#include "../include/Message.h"

Diary::Diary(const std::string& filename) : 
    filename("myfile"),
    messages_capacity(10),
    messages(nullptr),
    messages_size(0)
{
    messages_capacity = 10;
    messages = new Message[messages_capacity];
}

void Diary::add(const std::string& message)
{
    Message msg;
    msg.content = message;
    messages[messages_size] = msg;
    messages_size++;

}

void Diary::write()
{

}