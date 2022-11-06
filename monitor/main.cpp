#include <iostream>
#include "monitor.hpp"

void printInfo(const Monitor &M)
{
    std::cout << "Stanje monitora: /";
    switch(M.getMonitorState())
    {
        case(sON):
            std::cout <<"ON/";
            break;
        case(sOFF):
            std::cout << "OFF/";
            break;
        case(sOUT):
            std::cout << "OUT/";
            break;
        case(sTEST):
            std::cout <<"TEST/";
            break;
        case(sSTANDBY):
            std::cout <<"STANDBY/";
            break;
        default:
            std::cout <<"UNKNOWN/";
            break;
    }
    switch(M.getScreenState())
    {
        case(ssON):
            std::cout << "screen:ON/";
            break;
        case(ssOFF):
            std::cout <<"screen:OFF/";
            break;
        default:
            std::cout <<"screen:unknown/";
            break;
    }


    std::cout << M.getBrightness() << "/\n";
}

int main()
{

    Monitor m1;
    printInfo(m1);
    m1.turnOn();
    m1.incB();
    m1.turnTest();
    printInfo(m1);
    m1.incB();
    m1.turnOut();
    m1.decB();
    printInfo(m1);

    return 0;
}
