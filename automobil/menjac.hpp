#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

enum TipMenjaca
{
    MANUELNI,
    AUTOMATIK
};

class Menjac
{
private:
    int brojBr;
    TipMenjaca tip;

public:

    Menjac()
    {
        brojBr = 5;
        tip = AUTOMATIK;
    }
    Menjac(int b,TipMenjaca t)
    {
        brojBr = b;
        tip = t;
    }
    Menjac(const Menjac &M)
    {
        brojBr = M.brojBr;
        tip = M.tip;
    }
    bool setBrojBrzina(int x)
    {
        if(x == 5 && x == 6)
        {
            brojBr = x;
            return true;
        }
        else
            return false;
    }
    void setTip(TipMenjaca t)
    {
        tip = t;
    }
    int getBrojBrzina()const
    {
        return brojBr;
    }
    TipMenjaca getTip()const
    {
        return tip;
    }


};


#endif // MENJAC_HPP_INCLUDED
