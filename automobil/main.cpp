#include <iostream>
#include "automobil.hpp"


int main()
{
    //----------------
    Menjac m1,m2(6,MANUELNI),m3(m1);  //bespotrebno callanje funkcija zbog glupog predmeta

    m1.setBrojBrzina(6);
    m3.setTip(MANUELNI);
    m2.getBrojBrzina();
    m3.getTip();

    Skoljka s1,s2(CRVENA),s3(s2);

    s1.getBoja();
    s2.setBoja(ZELENA);


    //----------------

    Automobil audi,mercedes(m2.getBrojBrzina(),m2.getTip(),s3.getBoja()),bmw(5,MANUELNI,ZELENA);

    audi.setBoja(CRVENA);
    audi.setBrojBrzina(6);
    audi.setTipMenjaca(AUTOMATIK);

    std::cout << "mercedes: " << mercedes.getBoja() << " " << mercedes.getBrojBrzina() <<
    " " << mercedes.getTipMenjaca() << std::endl; //manuelni automatik;plava crvena zelena


    return 0;
}
