#include "Dylatacja.h"

void Dylatacja::przeksztalc( Bitmapa &bitmapa )
{
	std::vector<int> indeksy_wierszy_do_zamiany;
	std::vector<int> indeksy_kolumn_do_zamiany;

	for( unsigned wiersz = 0; wiersz < bitmapa.dlugosc(); wiersz++ )
	{
		for( unsigned kolumna = 0; kolumna < bitmapa.szerokosc(); kolumna++ )
		{
			if( bitmapa( wiersz, kolumna ) == false )
			{
				if( wiersz > 0 && bitmapa( wiersz - 1, kolumna ) == true )
				{
					indeksy_wierszy_do_zamiany.push_back( wiersz );
					indeksy_kolumn_do_zamiany.push_back( kolumna );
					continue;
				}

				if( wiersz < bitmapa.dlugosc() - 1 && bitmapa( wiersz + 1, kolumna ) == true )
				{
					indeksy_wierszy_do_zamiany.push_back( wiersz );
					indeksy_kolumn_do_zamiany.push_back( kolumna );
					continue;
				}

				if( kolumna > 0 && bitmapa( wiersz, kolumna - 1 ) == true )
				{
					indeksy_wierszy_do_zamiany.push_back( wiersz );
					indeksy_kolumn_do_zamiany.push_back( kolumna );
					continue;
				}

				if( kolumna < bitmapa.szerokosc() - 1 && bitmapa(wiersz, kolumna + 1) == true )
				{
					indeksy_wierszy_do_zamiany.push_back( wiersz );
					indeksy_kolumn_do_zamiany.push_back( kolumna );
					continue;
				}
			}
		}
	}

	for( unsigned i = 0; i < indeksy_wierszy_do_zamiany.size(); i++ )
	{
		bitmapa( indeksy_wierszy_do_zamiany[ i ], indeksy_kolumn_do_zamiany[ i ] ) = true;
	}
}
