#include "../include/Time.h"
#include "../include/Date.h"

#include <iostream>
#include <sstream>
#include <string>
#include <ctime>

Time::Time() : hour(0), minute(0), second(0)
{
}

std::string get_current_time()
{
    return format_current_date("%H:%M:%S");
}

void Time::set_from_string(const std::string& time)
{
    std::stringstream stream(time);
    char discard;

    stream >> hour;
    stream >> discard;
    stream >> minute;
    stream >> discard;
    stream >> second;
}
