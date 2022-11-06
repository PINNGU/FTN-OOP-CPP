#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED
#include "krug.hpp"
#include "prav.hpp"

class Valjak
{
private:
        Krug K;
        Pravougaonik P;
public:
    Valjak(double tr = 2.4,double tb =4.5) : K(tr), P(K.getO(),tb) {}

    double getR()
    {
        return K.getR();
    }
    double getH()
    {
        return P.getB();
    }
    double getP()
    {
        return 2*K.getP() + P.getP();
    }
    double getV()
    {
        return K.getP() * P.getB();
    }

};


#endif // VALJAK_HPP_INCLUDED
