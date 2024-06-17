#ifndef USREDNIANIE_H
#define USREDNIANIE_H

#include "Przeksztalcenie.h"
#include "BitmapaExt.h"
#include <vector>

class Usrednianie :
    public Przeksztalcenie
{
    /*
    * Jesli piksel ma wiecej niz 2 sasiadow w kolorze k, to nowym kolorem tego piksela jest k.
    * @param bitmapa - referencja do bitmapy.
    */
    void przeksztalc( Bitmapa &bitmapa ) override;
};

#endif
