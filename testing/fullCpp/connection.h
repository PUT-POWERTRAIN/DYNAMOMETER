#ifndef CONNECTION_H
#define CONNECTION_H

#include <array>

class Connection
{
public:
    // Konstruktor
    Connection();

    // Funkcja do zmiany sygnału silnika
    void motorSignalChangeTo(int sliderValue, int motorNumber);

private:
    // Tablica sygnałów silników, zainicjalizowana wartościami 1000
    std::array<int, 4> motorSignals = {1000, 1000, 1000, 1000};

    // Funkcja do wysyłania wiadomości UDP
    void sendUdpMessage();
};

#endif // CONNECTION_H
