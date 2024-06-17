#include "MojeWyjatki.h"

namespace MojeWyjatki
{
    WyjatekNieprawidloweDane::WyjatekNieprawidloweDane() : std::runtime_error( "Nieprawidlowe dane" )
    {
    }
    WyjatekNieprawidloweDane::WyjatekNieprawidloweDane( const std::string &msg ) : std::runtime_error( msg )
    {
    }

    WyjatekPustaTablica::WyjatekPustaTablica() : std::runtime_error( "Tablica jest pusta" )
    {
    }
    WyjatekPustaTablica::WyjatekPustaTablica( const std::string &msg ) : std::runtime_error( msg )
    {
    }

    WyjatekNieprawidlowyIndeks::WyjatekNieprawidlowyIndeks() : std::out_of_range( "Nieprawidlowy indeks" )
    {
    }
    WyjatekNieprawidlowyIndeks::WyjatekNieprawidlowyIndeks( const std::string &msg ) : std::out_of_range( msg )
    {
    }

    WyjatekBrakPamieci::WyjatekBrakPamieci() : std::runtime_error( "Brak pamieci" )
    {
    }
    WyjatekBrakPamieci::WyjatekBrakPamieci( const std::string &msg ) : std::runtime_error( msg )
    {
    }
}
