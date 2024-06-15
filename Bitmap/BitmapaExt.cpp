#include "BitmapaExt.h"

BitmapaExt::BitmapaExt( unsigned dlugosc, unsigned szerokosc )
	: dlugosc_bitmapy( dlugosc ), szerokosc_bitmapy( szerokosc ), dane( dlugosc, std::vector<bool>( szerokosc, false ) )
{
}

unsigned BitmapaExt::dlugosc()
{
	return dlugosc_bitmapy;
}

unsigned BitmapaExt::szerokosc()
{
	return szerokosc_bitmapy;
}
/*
bool & BitmapaExt::operator()( unsigned x, unsigned y )
{
	return dane;
}
*/
bool BitmapaExt::operator()( unsigned x, unsigned y ) const
{
	return false;
}

