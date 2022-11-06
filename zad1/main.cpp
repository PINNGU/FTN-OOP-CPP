#include <iostream>
#include "valjak.hpp"



int main()
{
    Valjak v1,v2(4.2,8.1);
    std::cout << v2.getR() << " " << v2.getV() << " " << v2.getH() << " " << v2.getP() << "\n";
    return 0;
}
