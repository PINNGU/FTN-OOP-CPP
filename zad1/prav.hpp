#ifndef PRAV_HPP_INCLUDED
#define PRAV_HPP_INCLUDED

class Pravougaonik
{
private:
    double a,b;
public:

    Pravougaonik(double ta = 2.0,double tb = 4.5)
    {
        a = ta;
        b = tb;
    }

    double getA()const
    {
        return a;
    }
    double getB()const
    {
        return b;
    }
    double getO()const
    {
        return (2*a + 2*b);
    }
    double getP()const
    {
        return a*b;
    }


};

#endif // PRAV_HPP_INCLUDED
