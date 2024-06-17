#include "BitmapaExt.h"

BitmapaExt::BitmapaExt( unsigned dlugosc, unsigned szerokosc )
	: dlugosc_bitmapy( dlugosc ), szerokosc_bitmapy( szerokosc ), dane( dlugosc, std::vector<uint8_t>( szerokosc, false ) )
{
}

BitmapaExt::~BitmapaExt()
{
}

unsigned BitmapaExt::dlugosc() const
{
	return dlugosc_bitmapy;
}

unsigned BitmapaExt::szerokosc() const
{
	return szerokosc_bitmapy;
}

bool & BitmapaExt::operator()( unsigned x, unsigned y )
{
	if( x >= dlugosc_bitmapy || y >= szerokosc_bitmapy )
	{
		throw MojeWyjatki::WyjatekNieprawidlowyIndeks( "Niepoprawne indeksy." );
	}

	return reinterpret_cast<bool &>(dane[ x ][ y ]);
}

bool BitmapaExt::operator()( unsigned x, unsigned y ) const
{
	if( x >= dlugosc_bitmapy || y >= szerokosc_bitmapy )
	{
		throw MojeWyjatki::WyjatekNieprawidlowyIndeks( "Niepoprawne indeksy." );
	}

	return dane[ x ][ y ];
}

std::ostream &operator<<( std::ostream &os, const BitmapaExt &bitmapa )
{
	for( unsigned wiersz = 0; wiersz < bitmapa.dlugosc_bitmapy; wiersz++ )
	{
		for( unsigned kolumna = 0; kolumna < bitmapa.szerokosc_bitmapy; kolumna++ )
		{
			if( bitmapa( wiersz, kolumna ) == true )
			{
				os << "1";
			}
			else
			{
				os << "0";
			}
		}
		os << std::endl;
	}

	return os;
}
