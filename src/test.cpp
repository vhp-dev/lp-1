//Include the header(s) you wish to test
#include "Diary.h"

#include <iostream>

int main(int argc, char const *argv[])
{
    Diary d("filename");

    d.add("msg");

    d.write();

    return 0;
}
