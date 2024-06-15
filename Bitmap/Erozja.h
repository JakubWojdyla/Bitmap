#ifndef EROZJA_H
#define EROZJA_H

#include "Przeksztalcenie.h"
#include "BitmapaExt.h"
#include "Bitmapa.h"

class Erozja :
    public Przeksztalcenie
{
    void przeksztalc( Bitmapa &bitmapa ) override;
};

#endif
