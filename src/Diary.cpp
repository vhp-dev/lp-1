#include "Diary.h"

#include <iostream>
#include <fstream>

Diary::Diary(const std::string& filename) : 
    filename("myfile")
{
    load();
}

Diary::~Diary()
{

}

void Diary::add(const std::string& message)
{
    Message msg;

    msg.content = message;
    msg.date.set_from_string(get_current_date());
    msg.time.set_from_string(get_current_time());

    messages.push_back(msg);
}

std::vector<Message*> Diary::search(const std::string& to_search_for)
{
    std::vector<Message*> messages_found;

std::cout << "qlq coisa" << std::endl;

    for(auto& message : messages)
    {
        if (message.content.find(to_search_for) == 0)
            messages_found.push_back(&message);
    }

    return messages_found;
}

void Diary::write()
{
    std::ofstream file_stream_in(filename); //ofstream: Stream class to write to files
    std::string date_check = messages[0].date.to_string();

    file_stream_in << "\n" << "# " << messages[0].date.to_string() << "\n" << std::endl;

    for (size_t i = 0; i < messages.size(); i++)
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

    Message msg;

    while (file_stream_out >> word)
    {
        if (word == "#")
        {
            file_stream_out >> date_check;
        }

        if (word == "-")
        {
            msg.date.set_from_string(date_check);
            
            file_stream_out >> time;
            msg.time.set_from_string(time);

            std::getline(file_stream_out, content);
            content = content.substr(1,content.length() - 1);
            msg.content = content;
    
            messages.push_back(msg);
        }
    }
    file_stream_out.close();
}

/* // depreciated
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
 */