#ifndef ZLOZENIEPRZEKSZTALCEN_H
#define ZLOZENIEPRZEKSZTALCEN_H

#include "Przeksztalcenie.h"
#include "MojeWyjatki.h"
#include <iostream>
#include <vector>

class ZlozeniePrzeksztalcen :
    public Przeksztalcenie
{
private:
    std::vector<Przeksztalcenie *> przeksztalcenia; // lista przeksztalcen

public:
    /*
    * Metoda przeksztalc stosuje wszystkie przeksztalcenia dodane do tego obiektu do podanej bitmapy.
    * @param bitmapa - referencja do bitmapy.
    */
    void przeksztalc( Bitmapa &bitmapa ) override;

    /*
    * Metoda dodaje nowe przeksztalcenie do wektora przeksztalcen.
    * @param nowe_przeksztalcenie - wskaznik do nowego przeksztalcenia.
    */
    void dodaj_przeksztalcenie( Przeksztalcenie *nowe_przeksztalcenie );
};

#endif
