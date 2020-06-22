    #ifndef MESSAGE_H
    #define MESSAGE_H

    #include <string>

    struct Time {
      int hora;
      int minuto;
      int segundo;
    };

    struct Message {
      std::string date;
      Time time;
      std::string content;

    };

    #endif