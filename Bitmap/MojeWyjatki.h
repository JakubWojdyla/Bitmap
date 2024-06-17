#ifndef MOJEWYJATKI_H
#define MOJEWYJATKI_H

#include <stdexcept>
#include <string>

namespace MojeWyjatki
{
    class WyjatekNieprawidloweDane : public std::runtime_error
    {
    public:
        WyjatekNieprawidloweDane();
        WyjatekNieprawidloweDane( const std::string &msg );
    };

    class WyjatekPustaTablica : public std::runtime_error
    {
    public:
        WyjatekPustaTablica();
        WyjatekPustaTablica( const std::string &msg );
    };

    class WyjatekNieprawidlowyIndeks : public std::out_of_range
    {
    public:
        WyjatekNieprawidlowyIndeks();
        WyjatekNieprawidlowyIndeks( const std::string &msg );
    };

    class WyjatekBrakPamieci : public std::runtime_error
    {
    public:
        WyjatekBrakPamieci();
        WyjatekBrakPamieci( const std::string &msg );
    };
}

#endif
