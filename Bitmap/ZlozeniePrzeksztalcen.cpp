#include "ZlozeniePrzeksztalcen.h"

void ZlozeniePrzeksztalcen::przeksztalc( Bitmapa &bitmapa )
{
    for( unsigned i = 0; i < przeksztalcenia.size(); i++ )
    {
        przeksztalcenia[ i ]->przeksztalc( bitmapa );
    }
}

void ZlozeniePrzeksztalcen::dodaj_przeksztalcenie( Przeksztalcenie *nowe_przeksztalcenie )
{
    przeksztalcenia.push_back( nowe_przeksztalcenie );
}
