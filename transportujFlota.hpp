#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia{};
    unsigned int przewieziony=0;
    unsigned int zaglowce=0;

    while (przewieziony<towar){
        Statek* Lajba=stocznia();

        if(dynamic_cast<Zaglowiec*>(Lajba))
            zaglowce++;

        auto ladunek=Lajba->transportuj();
        przewieziony+=ladunek;
        delete Lajba;
     }



    return zaglowce;
}