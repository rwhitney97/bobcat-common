
#include <iostream>
#include <string>
#include "common.h"


class SerialportTalkerListener {
    private:
        std::string mSerialPortStr;

        bool is_new_msg = false;
        std::string recvd_chars;

    public:

        SerialportTalkerListener();

        ~SerialportTalkerListener();

        void init();

        void talk();

        void listen();



};