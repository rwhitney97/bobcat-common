#pragma once

#include "serial/serial.h"
#include <iostream>


namespace comms {

class SerialTalkerListener
{
private:

    serial::Serial mSerialPort;
    std::string port_name;
    unsigned long baudrate;

public:

    SerialTalkerListener();
    ~SerialTalkerListener();
    bool init();

    unsigned long getBaudrate();
    void setBaudrate(unsigned long baudrate_);

    std::string getPortStr();
    void setPortStr(std::string port_name_);
};


} //namespace comms