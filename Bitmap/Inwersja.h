#ifndef INWERSJA_H
#define INWERSJA_H

#include "Przeksztalcenie.h"

class Inwersja :
    public Przeksztalcenie
{
    /*
    * Zamienia czarne piksele na biale i biale na czarne (zamienia true na false i false na true).
    * @param bitmapa - referancja do bitmapy, ktora bedziemy zmieniac.
    */
    void przeksztalc( Bitmapa & bitmapa );
};

#endif
