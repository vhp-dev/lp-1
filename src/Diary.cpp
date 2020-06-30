#include "Diary.h"

#include <iostream>
#include <fstream>

Diary::Diary(const std::string& filename) : 
    filename("myfile"),
    messages(nullptr),
    messages_size(0),
    messages_capacity(10)
{
    messages = new Message[messages_capacity]; //Always initialize (new) inside a class constructor
    load();
}

Diary::~Diary()
{
    delete[] messages;
}

void Diary::add(const std::string& message)
{
    if (messages_size == messages_capacity)
        resize_capacity();

    Message msg;
    msg.content = message;
    msg.date.set_from_string(get_current_date());
    msg.time.set_from_string(get_current_time());

    messages[messages_size] = msg;
    messages_size++;
}

void Diary::write()
{
    std::ofstream file_stream_in(filename); //ofstream: Stream class to write to files
    std::string date_check = messages[0].date.to_string();

    file_stream_in << "\n" << "# " << messages[0].date.to_string() << "\n" << std::endl;

    for (size_t i = 0; i < messages_size; i++)
    {
        if (messages[i].date.to_string() != date_check)
        {
            date_check = messages[i].date.to_string();
            file_stream_in << "\n" << "# " << messages[i].date.to_string() << "\n" << std::endl;
        }

        file_stream_in << "- " << messages[i].time.to_string() << " " << messages[i].content << std::endl;
    }
    
    file_stream_in.close();
}

void Diary::load()
{
    std::ifstream file_stream_out(filename); //ifstream: Stream class to read from files
    std::string date_check;
    std::string time;
    std::string content;
    std::string word;
    int msg_count = 0;

    while (file_stream_out >> word)
    {
        if (msg_count == messages_capacity)
            resize_capacity();

        if (word == "#")
        {
            file_stream_out >> date_check;
        }

        if (word == "-")
        {
            messages[msg_count].date.set_from_string(date_check);
            file_stream_out >> time;
            messages[msg_count].time.set_from_string(time);
            std::getline(file_stream_out, content);
            content = content.substr(1,content.length() - 1);
            messages[msg_count].content = content;
            msg_count++;
        }

    }
    messages_size = msg_count;

    file_stream_out.close();
}

void Diary::resize_capacity()
{
    size_t new_capacity = messages_capacity * 2;

    Message* messages_resized = new Message[new_capacity];

    for (size_t i = 0; i < messages_capacity; i++)
    {
        messages_resized[i] = messages[i];
    }

    delete[] messages;

    messages = new Message[new_capacity];

    for (size_t i = 0; i < messages_capacity; i++)
    {
         messages[i] = messages_resized[i];
    }

    delete[] messages_resized;

    messages_capacity = new_capacity;
}