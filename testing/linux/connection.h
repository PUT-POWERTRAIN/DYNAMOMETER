#ifndef CONNECTION_H
#define CONNECTION_H

#include <array>
#include <string>

class Connection
{
public:
    Connection();
    void motorSignalChangeTo(int sliderValue, int motorNumber);
    void changeMotorControlIPandPort(int motorControlPort, const char* motorControlIP);
    void receiveUdpMessage();
    int motor1_rpm = 0;


private:
    std::array<int, 4> motorSignals = {1000, 1000, 1000, 1000};
    void sendUdpMessage();
    int motorControlPort = 12345;
    int measuringPort = 2390;
    const char* motorControlIP = "192.168.155.248";
};

#endif // CONNECTION_H
