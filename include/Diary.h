#ifndef DIARY_H
#define DIARY_H

#include "Message.h"

#include <string>

struct Diary
{
    Diary(const std::string& filename);

    std::string filename; //Allows to have many diarys for each purpose
    Message* messages; //Store all messages for the diary
    size_t messages_size; //Actual capacity at the moment
    size_t messages_capacity; //Maximun value supported by the array

    void add(const std::string& message);
    void write();
};

#endif