#include "connection.h"
#include <iostream>
#include <string>
#include <cstring> // For memset
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#include <fcntl.h>
#include <QString>

Connection::Connection() {}

void Connection::motorSignalChangeTo(int sliderValue, int motorNumber) {
    int value = 1000 + ((2000 - 1000) * sliderValue) / 100;
    motorSignals[motorNumber] = value;
    sendUdpMessage();
}

void Connection::sendUdpMessage() {
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        std::cerr << "Socket creation failed" << std::endl;
        return;
    }

    sockaddr_in recipientAddr;
    memset(&recipientAddr, 0, sizeof(recipientAddr));
    recipientAddr.sin_family = AF_INET;
    recipientAddr.sin_port = htons(motorControlPort); // PORT

    if (inet_pton(AF_INET, motorControlIP, &recipientAddr.sin_addr) <= 0) { // IP
        std::cerr << "Invalid address/ Address not supported" << std::endl;
        close(sockfd);
        return;
    }

    std::string message = std::to_string(motorSignals[0]) + ";" + std::to_string(motorSignals[1]) + ";" + std::to_string(motorSignals[2]) + ";" + std::to_string(motorSignals[3]);

    int bytesSent = sendto(sockfd, message.c_str(), message.size(), 0, (sockaddr*)&recipientAddr, sizeof(recipientAddr));
    if (bytesSent < 0) {
        std::cerr << "Error sending data" << std::endl;
    } else {
        std::cout << "Sent " << bytesSent << " bytes of data\n";
    }

    close(sockfd);
}

void Connection::changeMotorControlIPandPort(int newPort, const char* newIP) {
    motorControlPort = newPort;
    motorControlIP = newIP;
}

void Connection::receiveUdpMessage() {
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        std::cerr << "Socket creation failed" << std::endl;
        return;
    }

    sockaddr_in localAddr;
    memset(&localAddr, 0, sizeof(localAddr));
    localAddr.sin_family = AF_INET;
    localAddr.sin_port = htons(measuringPort); // PORT
    localAddr.sin_addr.s_addr = INADDR_ANY; // Listen on any interface

    if (bind(sockfd, (sockaddr*)&localAddr, sizeof(localAddr)) < 0) {
        std::cerr << "Bind failed" << std::endl;
        close(sockfd);
        return;
    }

    // Set socket to non-blocking mode
    int flags = fcntl(sockfd, F_GETFL, 0);
    if (flags < 0) {
        std::cerr << "Failed to get socket flags" << std::endl;
        close(sockfd);
        return;
    }

    if (fcntl(sockfd, F_SETFL, flags | O_NONBLOCK) < 0) {
        std::cerr << "Failed to set non-blocking mode" << std::endl;
        close(sockfd);
        return;
    }

    sockaddr_in senderAddr;
    socklen_t senderAddrSize = sizeof(senderAddr);
    char buffer[512]; // Buffer to store incoming messages

    int bytesReceived = recvfrom(sockfd, buffer, sizeof(buffer) - 1, 0, (sockaddr*)&senderAddr, &senderAddrSize);
    if (bytesReceived < 0) {
        std::cerr << "Receive failed" << std::endl;
    } else {
        buffer[bytesReceived] = '\0'; // Null-terminate the received data
        int receivedNumber = atoi(buffer); // Convert received data to an integer
        motor1_rpm = receivedNumber;
    }

    close(sockfd);
}
