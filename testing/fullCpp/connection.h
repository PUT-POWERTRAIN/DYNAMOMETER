//Wiktor Kloj 2024 Version Alpha
//Functionality of this class:connection and motors controll
//motorSignalChangeTo(new signal send to motor, motorNumber where motor1 is indexed with 0 etc.)
#ifndef CONNECTION_H
#define CONNECTION_H

#include <array>

class Connection
{
public:
    Connection();

    void motorSignalChangeTo(int sliderValue, int motorNumber);

private:
    std::array<int, 4> motorSignals = {1000, 1000, 1000, 1000};

    void sendUdpMessage();
};

#endif
