#ifndef BROD_HPP_INCLUDED
#define BROD_HPP_INCLUDED
#include "motor.hpp"

const int gorivo_max = 15;

enum StanjeBroda
{
    USIDREN,
    PLOVI,
    POKVAREN
};

class Brod
{
private:

    StanjeBroda stanje;
    Motor motor;
    int predjenoKilometara;
    int kolicinaGoriva; //0 do 15

public:

    Brod() : motor()
{
    stanje = USIDREN;
    kolicinaGoriva = 0;
    predjenoKilometara = 0;
}

bool pokvari()
{
    if(stanje != POKVAREN)
    {
        stanje = POKVAREN;
        kolicinaGoriva = 0;
        motor.setBrzina(0);
        return true;
    }
    else
        return false;
}

bool popravi()
{
    if(stanje == POKVAREN)
    {
        stanje = USIDREN;
        motor.setBrzina(0);
        return true;
    }
    else
        return false;


}

bool pokreni()
{
    if(stanje == USIDREN)
    {
        stanje = PLOVI;
        return true;
    }
    else
        return false;
}

bool zaustavi()
{
    if(stanje == PLOVI)
    {
        stanje = USIDREN;
        motor.setBrzina(0);
        return true;
    }
    else
        return false;
}

bool sipajGorivo()
{
    if(stanje == USIDREN && kolicinaGoriva < gorivo_max)
    {
        if(kolicinaGoriva == 14)
        {
            kolicinaGoriva = 15;
            return true;
        }

        kolicinaGoriva = kolicinaGoriva + 2;
        return true;
    }
    else
        return false;
}

bool povecajBrzinu()
{
    if(stanje == PLOVI && motor.getBrzina() < 5)
    {
        motor.setBrzina(motor.getBrzina() + 1);
        return true;
    }
    else
        return false;
}

bool smanjiBrzinu()
{
    if(stanje == PLOVI && motor.getBrzina() > 0)
    {
        motor.setBrzina(motor.getBrzina() - 1);
        return true;
    }
    else
        return false;

}

bool putuj()
{
    if(stanje == PLOVI && kolicinaGoriva > 0)
    {
        kolicinaGoriva = kolicinaGoriva - 1;
        predjenoKilometara = predjenoKilometara + 5*motor.getBrzina();
        return true;
    }
    else
        return false;

}

StanjeBroda getStanje()const
{
    return stanje;
}

Motor getMotor()const
{
    return motor;
}

int getKilometri()const
{
    return predjenoKilometara;
}

int getGorivo()const
{
    return kolicinaGoriva;
}







};

#endif // BROD_HPP_INCLUDED
