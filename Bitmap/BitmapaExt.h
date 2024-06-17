#ifndef BITMAPAEXT_H
#define BITMAPAEXT_H

#include "Bitmapa.h"
#include <vector>
#include <iostream>
#include "MojeWyjatki.h"

class BitmapaExt :
    public Bitmapa
{
    unsigned dlugosc_bitmapy, szerokosc_bitmapy;
    std::vector <std::vector <uint8_t>> dane; // true - oznacza kolor czarny, false - bialy

public:
    /*
    * Konstruktor ustawiajacy dlugosc i szerokosc bitmapy na podane wartosci. Caly dwuwymiarowy wektor
    * reprezentujacy bitmape ustawia na false (kolor bialy).
    * @param dlugosc - dlugosc bitmapy w pikselach,
    * @param szerokosc - szerokosc bitmapy w pikselach.
    */
    BitmapaExt( unsigned dlugosc, unsigned szerokosc );

    /*
    * Destruktor.
    */
    ~BitmapaExt() override;

    /*
    * Funkcja zwracajaca dlugosc bitmapy.
    * @return Dlugosc bitmapy.
    */
    unsigned dlugosc() const override;

    /*
    * Funkcja zwracajaca szerokosc bitmapy.
    * @return Szerokosc bitmapy.
    */
    unsigned szerokosc() const override;

    /*
    * Metoda umozliwia dostep do elementow bitmapy w celu modyfikacji.
    * @param x - indeks wiersza.
    * @param y - indeks kolumny.
    * @return Referencja do wartosci w bitmapie.
    * @throws MojeWyjatki::WyjatekNieprawidlowyIndeks w przypadku niepoprawnych indeksow.
    */
    bool & operator() ( unsigned x, unsigned y ) override;

    /*
    * Metoda umozliwia dostep do elementow bitmapy w trybie tylko do odczytu.
    * @param x - indeks wiersza.
    * @param y - indeks kolumny.
    * @return Wartosc bool w bitmapie.
    * @throws MojeWyjatki::WyjatekNieprawidlowyIndeks w przypadku niepoprawnych indeksow.
    */
    bool operator() ( unsigned x, unsigned y ) const override;

    /*
    * Operator wyjscia strumieniowego dla klasy BitmapaExt.
    * Umozliwia wypisywanie bitmapy do strumienia wyjsciowego (np. std::cout).
    * Przechodzi przez wszystkie piksele bitmapy i wypisuje '1' dla pikseli o wartosci true (czarny)
    * oraz '0' dla pikseli o wartosci false (bialy).
    * @param os - strumien wyjsciowy.
    * @param bitmapa - obiekt klasy BitmapaExt do wypisania.
    * @return Zwraca referencje do strumienia wyjsciowego.
    */
    friend std::ostream &operator<<( std::ostream &os, const BitmapaExt &bitmapa );
};

#endif
