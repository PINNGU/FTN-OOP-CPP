#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum BojaSkoljke
{
    PLAVA,
    CRVENA,
    ZELENA
};

class Skoljka
{
private:
    BojaSkoljke boja;

public:

    Skoljka()
    {
        boja = PLAVA;
    }
    Skoljka(BojaSkoljke b)
    {
        boja = b;
    }
    Skoljka(const Skoljka &S)
    {
        boja = S.boja;
    }
    void setBoja(BojaSkoljke bx)
    {
        boja = bx;
    }
    BojaSkoljke getBoja()const
    {
        return boja;
    }
};

#endif // SKOLJKA_HPP_INCLUDED
