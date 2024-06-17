#ifndef DYLATACJA_H
#define DYLATACJA_H

#include "Przeksztalcenie.h"
#include "BitmapaExt.h"

class Dylatacja :
    public Przeksztalcenie
{
    /*
    * Metoda zamienia wszystkie biale piksele, ktore sasiaduja z czarnym pikselem na czarne (true).
    * @param bitmapa - referencja do bitmapy.
    */
    void przeksztalc( Bitmapa &bitmapa ) override;
};

#endif
