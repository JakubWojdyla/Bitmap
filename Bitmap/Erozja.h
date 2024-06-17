#ifndef EROZJA_H
#define EROZJA_H

#include "Przeksztalcenie.h"
#include "BitmapaExt.h"
#include "Bitmapa.h"

class Erozja :
    public Przeksztalcenie
{
    /*
    * Metoda zamienia wszytskie czarne piksele, ktore maja co najmniej jednego sasiada
    * bialego na kolor bialy (false).
    * @param bitmapa - referencja do bitmapy.
    */
    void przeksztalc( Bitmapa &bitmapa ) override;
};

#endif
