#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED

#include "screen.hpp"

enum MonitorStates  //sreen states ssON,ssOFF
{

    sON,
    sOFF,
    sOUT,
    sTEST,
    sSTANDBY

};

class Monitor
{

private:

    Screen screen;
    MonitorStates state;

public:

    Monitor() : screen(), state(sOFF) {}

    bool turnOn()
    {
        if(state == sTEST || state == sSTANDBY || state == sOFF)
        {
            state = sON;
            screen.setState(ssON);
            return true;
        }
        else
            return false;
    }


    bool turnOff()
    {
        if(state == sTEST || state == sON || state == sSTANDBY)
        {
            state = sOFF;
            screen.setState(ssOFF);
            return true;
        }
        else
            return false;
    }


    bool turnOut()
    {
        if(state == sTEST || state == sON || state == sSTANDBY || state == sOFF)
        {
            state = sOUT;
            screen.setState(ssOFF);
            return true;
        }
        else
            return false;
    }


    bool turnTest()
    {
        if(state == sON)
        {
            state = sTEST;
            return true;
        }
        else
            return false;
    }

    bool turnStandBy()
    {
        if(state == sON)
        {
            state = sSTANDBY;
            screen.setState(ssOFF);
            return true;
        }
        else
            return false;

    }


    bool repair()
    {
        if(state == sOUT)
        {
            state = sOFF;
            return true;
        }
        else
            return false;
    }

    bool incB()
    {
        return screen.incB();
    }

    bool decB()
    {
        return screen.decB();
    }

    MonitorStates getMonitorState()const
    {
        return state;
    }

    ScreenStates getScreenState()const
    {
        return screen.getState();
    }

    int getBrightness()const
    {
        return screen.getBrightness();
    }



};


#endif // MONITOR_HPP_INCLUDED
