#ifndef ZEROWANIE_H
#define ZEROWANIE_H

#include "Przeksztalcenie.h"

class Zerowanie :
    public Przeksztalcenie
{
    /*
    * Metoda ustawia wszystkie piksele w bitmapie na false (biale).
    * @param bitmapa - referencja do bitmapy.
    */
    void przeksztalc( Bitmapa &bitmapa ) override;
};

#endif
