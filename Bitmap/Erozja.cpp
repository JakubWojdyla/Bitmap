#include "Erozja.h"

void Erozja::przeksztalc( Bitmapa &bitmapa )
{
	std::vector<int> indeksy_wierszy;
	std::vector<int> indeksy_kolumn;

	for( int wiersz = 0; wiersz < bitmapa.dlugosc(); wiersz++ )
	{
		for( int kolumna = 0; kolumna < bitmapa.szerokosc(); kolumna++ )
		{
			if( bitmapa( wiersz, kolumna ) == true )
			{
				if( (wiersz > 0 && !bitmapa( wiersz - 1, kolumna )) ||
					(wiersz < bitmapa.dlugosc() - 1 && !bitmapa( wiersz + 1, kolumna )) ||
					(kolumna > 0 && !bitmapa( wiersz, kolumna - 1 )) ||
					(kolumna < bitmapa.szerokosc() - 1 && !bitmapa( wiersz, kolumna + 1 )) )
				{
					indeksy_wierszy.push_back( wiersz );
					indeksy_kolumn.push_back( kolumna );
				}
			}
		}
	}

	for( int wiersz = 0; wiersz < indeksy_wierszy.size(); wiersz++ )
	{
		for( int kolumna = 0; kolumna < indeksy_kolumn.size(); kolumna++ )
		{
			bitmapa( indeksy_wierszy[wiersz], indeksy_kolumn[kolumna] ) = false;
		}
	}
}
