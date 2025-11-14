#include <iostream>
#include <string>
using namespace std;

class Light
{
public:
    void on() { cout << "Light is on\n"; }
    void off() { cout << "Light is off\n"; }
};

class WifiDevice : virtual public Light
{
public:
    void connect() { cout << "wifi device connected\n"; }
};

class SmartLamp : public WifiDevice
{
public:
    void voiceControl() { cout << "Voice control activated\n"; }
};

int main()
{
    SmartLamp lamp;

    lamp.on();
    lamp.off();
    lamp.connect();
    lamp.voiceControl();

    return 0;
}