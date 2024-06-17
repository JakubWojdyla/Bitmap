#include "Inwersja.h"

void Inwersja::przeksztalc( Bitmapa & bitmapa )
{
    for( unsigned wiersz = 0; wiersz < bitmapa.dlugosc(); wiersz++ )
    {
        for( unsigned kolumna = 0; kolumna < bitmapa.szerokosc(); kolumna++ )
        {
            bitmapa( wiersz, kolumna ) = !bitmapa( wiersz, kolumna );
        }
    }
}
