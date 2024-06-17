#include "Usrednianie.h"

void Usrednianie::przeksztalc( Bitmapa &bitmapa )
{
	unsigned dlugosc = bitmapa.dlugosc();
	unsigned szerokosc = bitmapa.szerokosc();
	std::vector<std::pair<unsigned, unsigned>> do_zmiany;

	// Przechodzimy przez wszystkie piksele bitmapy
	for( unsigned wiersz = 0; wiersz < dlugosc; wiersz++ )
	{
		for( unsigned kolumna = 0; kolumna < szerokosc; kolumna++ )
		{
			unsigned licznik_czarnych = 0;
			unsigned licznik_bialych = 0;

			// Sprawdzanie sasiadow
			if( wiersz > 0 )
			{
				if( bitmapa( wiersz - 1, kolumna ) )
					licznik_czarnych++;
				else
					licznik_bialych++;
			}

			if( wiersz < dlugosc - 1 )
			{
				if( bitmapa( wiersz + 1, kolumna ) )
					licznik_czarnych++;
				else
					licznik_bialych++;
			}

			if( kolumna > 0 )
			{
				if( bitmapa( wiersz, kolumna - 1 ) )
					licznik_czarnych++;
				else
					licznik_bialych++;
			}

			if( kolumna < szerokosc - 1 )
			{
				if( bitmapa( wiersz, kolumna + 1 ) )
					licznik_czarnych++;
				else
					licznik_bialych++;
			}

			// Dodanie wspolrzednych do listy zamiany jesli wiecej sasiadow ma inny kolor
			if( licznik_czarnych > licznik_bialych && !bitmapa( wiersz, kolumna ) )
			{
				do_zmiany.emplace_back( wiersz, kolumna );
			}
			else if( licznik_bialych > licznik_czarnych && bitmapa( wiersz, kolumna ) )
			{
				do_zmiany.emplace_back( wiersz, kolumna );
			}
		}
	}

	// Zamiana kolorow pikseli na podstawie zapisanych wspolrzednych
	for( const auto &wspolrzedne : do_zmiany )
	{
		try
		{
			if( wspolrzedne.first >= dlugosc || wspolrzedne.second >= szerokosc )
			{
				throw MojeWyjatki::WyjatekNieprawidlowyIndeks( "Wyjscie poza zakres." );
			}
			bitmapa( wspolrzedne.first, wspolrzedne.second ) = !bitmapa( wspolrzedne.first, wspolrzedne.second );
		}
		catch( MojeWyjatki::WyjatekNieprawidlowyIndeks &e )
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
