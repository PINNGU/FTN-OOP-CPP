#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED

class Motor
{

private:

    int brzina; //0 do 5

public:

    Motor()
    {
        brzina = 0;
    }

    int getBrzina()const
    {
        return brzina;
    }
    void setBrzina(int x)
    {
        brzina = x;
    }

};

#endif // MOTOR_HPP_INCLUDED
