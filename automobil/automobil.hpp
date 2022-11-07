#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED
#include "skoljka.hpp"
#include "menjac.hpp"

class Automobil
{

private:

    Menjac M;
    Skoljka S;

public:

    Automobil() : M(), S() {}
    Automobil(int brb,TipMenjaca tm,BojaSkoljke bs): M(brb,tm), S(bs) {}
    Automobil(const Automobil &A) : M(A.M), S(A.S) {}

    bool setBrojBrzina(int br)
    {
        if(br == 5 && br == 6)
        {
            M.setBrojBrzina(br);
            return true;
        }
        else
            return false;
    }
    void setBoja(BojaSkoljke b)
    {
        S.setBoja(b);
    }
    void setTipMenjaca(TipMenjaca t)
    {
        M.setTip(t);
    }
    int getBrojBrzina()const
    {
        return M.getBrojBrzina();
    }
    TipMenjaca getTipMenjaca()const
    {
        return M.getTip();
    }
    BojaSkoljke getBoja()const
    {
        return S.getBoja();
    }



};



#endif // AUTOMOBIL_HPP_INCLUDED
