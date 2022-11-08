#include <iostream>
#include "brod.hpp"


void ispisiMotor(const Motor& M)
{
    std::cout << "--- Motor --- \n\nBrzina: " << M.getBrzina() <<"\n\n";

}

void ispisiBrod(const Brod& B)
{
    std::cout <<"---Brod---\n\nStanje:" ;
    switch(B.getStanje())
    {
    case(USIDREN):
        std::cout <<" USIDREN\n\n";
        break;
    case(PLOVI):
        std::cout <<" PLOVI\n\n";
        break;
    case(POKVAREN):
        std::cout <<" POKVAREN\n\n";
        break;
    default:
        std::cout <<" Nepoznato\n\n";
        break;
    }

    std::cout <<"Predjeno kilometara: " << B.getKilometri() <<"\n\nKolicina goriva: "<<B.getGorivo() <<"\n\n";
    ispisiMotor(B.getMotor());

}

int izbor()
{
    int x;
    std::cout << "--Izaberi opciju--\n";
    std::cout << "1)Pokvari\n2)Popravi\n3)Pokreni\n4)Zaustavi\n5)Sipaj Gorivo\n"
    << "6)Povecaj brzinu\n7)Smanji brzinu\n8)Putuj\n9)Ispisi\n0)Izadji iz programa\n";
    std::cin >> x;
    return x;

}

int main()
{
    Brod brod;
    int x;
    ispisiBrod(brod);

    do{
            x = izbor();
        switch(x)
        {
        case 1:
            if(brod.pokvari())
                std::cout <<"Uspesno.\n";
            else
                std::cout <<"Neuspesno.\n";
            break;
        case 2:
            if(brod.popravi())
                std::cout <<"Uspesno.\n";
            else
                std::cout <<"Neuspesno.\n";
            break;
        case 3:
            if(brod.pokreni())
                std::cout <<"Uspesno.\n";
            else
                std::cout <<"Neuspesno.\n";
            break;
        case 4:
            if(brod.zaustavi())
                std::cout <<"Uspesno.\n";
            else
                std::cout <<"Neuspesno.\n";
            break;
        case 5:
           if(brod.sipajGorivo())
                std::cout <<"Uspesno.\n";
            else
                std::cout <<"Neuspesno.\n";
            break;
        case 6:
           if(brod.povecajBrzinu())
                std::cout <<"Uspesno.\n";
            else
                std::cout <<"Neuspesno.\n";
            break;
        case 7:
            if(brod.smanjiBrzinu())
                std::cout <<"Uspesno.\n";
            else
                std::cout <<"Neuspesno.\n";
            break;
        case 8:
            if(brod.putuj())
                std::cout <<"Uspesno.\n";
            else
                std::cout <<"Neuspesno.\n";
            break;
        case 9:
            ispisiBrod(brod);
            break;
        case 0:
            std::cout << "\nkraj programa\n";
            break;
        default:
            std::cout <<"Pogresan unos.\n";
            break;
        }
        ispisiBrod(brod);

    }while(x != 0);



    return 0;
}
