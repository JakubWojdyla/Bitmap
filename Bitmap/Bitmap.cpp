#include <iostream>
#include "BitmapaExt.h"
#include "Inwersja.h"
#include "Erozja.h"
#include "Dylatacja.h"
#include "Zerowanie.h"
#include "Usrednianie.h"
#include "ZlozeniePrzeksztalcen.h"

int main()
{
    BitmapaExt aa( 5, 5 );
    aa( 1, 1 ) = aa( 2, 1 ) = aa( 3, 1 ) = aa( 2, 2 ) = aa( 1, 3 ) = aa( 2, 3 ) = aa( 3, 3 ) = true;

    // Wypisanie oryginalnej bitmapy
    std::cout << aa << "\n";

    // Tworzenie przeksztalcen
    Usrednianie u;
    Inwersja i;
    ZlozeniePrzeksztalcen z;

    // Dodawanie przeksztalcen do zlozonego przeksztalcenia
    z.dodaj_przeksztalcenie( &u );
    z.przeksztalc( aa );
    std::cout << "ee" << std::endl;
    std::cout << aa << std::endl;
    z.dodaj_przeksztalcenie( &i );

    std::cout << "xd" << std::endl;

    // Zastosowanie zlozonego przeksztalcenia do bitmapy
    z.przeksztalc( aa );

    std::cout << " www " << std::endl;

    // Wypisanie przeksztalconej bitmapy
    std::cout << aa << "\n";

    return 0;
}

