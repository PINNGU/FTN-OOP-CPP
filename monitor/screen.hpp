#ifndef SCREEN_HPP_INCLUDED
#define SCREEN_HPP_INCLUDED

const int korakPromene {2};

enum ScreenStates
{
    ssON,
    ssOFF
};


class Screen
{

private:

    ScreenStates state;
    int brightness;  //0 do 20

public:

    Screen()
    {
        state = ssOFF;
        brightness = 0;
    }

    bool incB()
    {
        if(state == ssON && brightness < 20)
        {
            brightness = brightness + korakPromene;
            return true;

        }
        else
            return false;
    }
    bool decB()
    {
        if(state == ssON && brightness > 0)
        {
            brightness = brightness - korakPromene;
            return true;
        }
        else
            return false;
    }
    void setState(ScreenStates s)
    {
        state = s;
    }
    ScreenStates getState()const
    {
        return state;
    }
    int getBrightness()const
    {
        return brightness;
    }


};


#endif // SCREEN_HPP_INCLUDED
