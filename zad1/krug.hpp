#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED
#include <cmath>

class Krug
{
private:
        double r;

public:

    Krug(double tr = 2.4)
    {
        r = tr;
    }

    double getR()const
    {
        return r;
    }

    double getO()const
    {
        return 2*3.14*r;
    }
    double getP()const
    {
        return 3.14*pow(r,2);
    }


};


#endif // KRUG_HPP_INCLUDED
