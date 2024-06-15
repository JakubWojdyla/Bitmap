#ifndef BITMAPAEXT_H
#define BITMAPAEXT_H

#include "Bitmapa.h"
#include <vector>

class BitmapaExt :
    public Bitmapa
{
    unsigned dlugosc_bitmapy, szerokosc_bitmapy;
    std::vector <std::vector <bool>> dane; // true - oznacza kolor czarny, false - bialy
public:
    /*
    * Konstruktor ustawiajacy dlugosc i szerokosc bitmapy na podane wartosci. Caly dwuwymiarowy wektor
    * reprezentujacy bitmape ustawia na false (kolor bialy).
    * @param dlugosc - dlugosc bitmapy w pikselach,
    * @param szerokosc - szerokosc bitmapy w pikselach.
    */
    BitmapaExt( unsigned dlugosc, unsigned szerokosc );

    /*
    * Funkcja zwracajaca dlugosc bitmapy.
    * @return Dlugosc bitmapy.
    */
    unsigned dlugosc();

    /*
    * Funkcja zwracajaca szerokosc bitmapy.
    * @return Szerokosc bitmapy.
    */
    unsigned szerokosc();


    //bool & operator() ( unsigned x, unsigned y );
    bool operator() ( unsigned x, unsigned y ) const;
};

#endif
