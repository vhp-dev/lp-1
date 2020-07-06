#ifndef DIARY_H
#define DIARY_H

#include "Message.h"

#include <string>
#include <vector>

struct Diary
{
    Diary(const std::string& filename); //Constructor to initialize the class
    ~Diary(); //Destructor to free memory used

    std::string path; //Allows to have many diarys for each purpose
    std::string default_format;
    void config_file();


    /* // depreciated
    Message* messages; //Store all messages for the diary
    size_t messages_size; //Actual capacity at the moment
    size_t messages_capacity; //Maximun value supported by the array
    */

    std::vector<Message> messages;

    void add(const std::string& message);
    std::vector<Message*> search(const std::string& to_search_for);

    void write();
    void load();

    /* // depreciated 
    void resize_capacity();
    */


};

#endif