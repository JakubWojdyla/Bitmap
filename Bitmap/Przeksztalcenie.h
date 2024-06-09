#ifndef PRZEKSZTALCENIE_H
#define PRZEKSZTALCENIE_H

#include "Bitmapa.h"

class Przeksztalcenie
{
public:
	/*
	* Funkcja wirtualna przeksztalcajaca bitmape.
	* @param Bitmapa - referencja do bitmapy, ktora chcemy przeksztalcic.
	*/
	virtual void przeksztalc( Bitmapa & ) = 0;
};

#endif
