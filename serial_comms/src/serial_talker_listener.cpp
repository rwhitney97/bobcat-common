#include "serial_talker_listener.hpp"


namespace comms {

SerialTalkerListener::SerialTalkerListener()
{
}

SerialTalkerListener::~SerialTalkerListener()
{
}

bool SerialTalkerListener::init()
{

    serial::Serial my_serial(port_name, baudrate, serial::Timeout::simpleTimeout(1000));

    return true;
}

void SerialTalkerListener::setBaudrate(unsigned long baudrate_)
{
    baudrate = baudrate_;
}

} //namespace comms