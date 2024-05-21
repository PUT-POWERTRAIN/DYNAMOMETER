#include "connection.h"
#include <iostream>
#include <string>
#include <Winsock2.h>
#include <Ws2tcpip.h>
#include <QString>
#pragma comment(lib, "Ws2_32.lib") // Łączenie z biblioteką Winsock

Connection::Connection(){}

void Connection::motorSignalChangeTo(int sliderValue,int motorNumber){
    int value = 1000 + ((2000 - 1000) * sliderValue) / 100;
    motorSignals[motorNumber]=value;
    sendUdpMessage();
}

void Connection::sendUdpMessage() {
    // Inicjalizacja Winsock
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Błąd podczas inicjalizacji Winsock\n";
        return;
    }

    // Tworzenie gniazda
    SOCKET sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (sockfd == INVALID_SOCKET) {
        std::cerr << "Błąd podczas tworzenia gniazda\n";
        WSACleanup();
        return;
    }

    // Ustawienie adresu odbiorcy
    sockaddr_in recipientAddr;
    memset(&recipientAddr, 0, sizeof(recipientAddr));
    recipientAddr.sin_family = AF_INET;
    recipientAddr.sin_port = htons(12345); // Port odbiorcy
    inet_pton(AF_INET, "192.168.0.105", &recipientAddr.sin_addr); // Adres IP odbiorcy

    std::string message = std::to_string(motorSignals[0]) + ";" + std::to_string(motorSignals[1]) + ";" + std::to_string(motorSignals[2]) + ";" + std::to_string(motorSignals[3]);

    // Wysłanie danych
    int bytesSent = sendto(sockfd, message.c_str(), message.size(), 0, (sockaddr*)&recipientAddr, sizeof(recipientAddr));
    if (bytesSent == SOCKET_ERROR) {
        std::cerr << "Błąd podczas wysyłania danych: " << WSAGetLastError() << std::endl;
    } else {
        std::cout << "Wysłano " << bytesSent << " bajtów danych\n";
    }

    // Zamknięcie gniazda
    closesocket(sockfd);
    WSACleanup();
}
