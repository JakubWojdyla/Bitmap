#ifndef BITMAPA_H
#define BITMAPA_H

class Bitmapa
{
public:
	/*
	* Funkcja zwracajaca dlugosc bitmapy.
	* @return Dlugosc bitmapy.
	*/
	virtual unsigned dlugosc() const = 0;

	/*
	* Funkcja zwracajaca szerokosc bitmapy.
	* @return Szerokosc bitmapy.
	*/
	virtual unsigned szerokosc() const = 0;

	virtual bool & operator() (unsigned x, unsigned y) = 0;
	virtual bool operator() (unsigned x, unsigned y) const = 0;

	/*
	* Destruktor bitmapy.
	*/
	virtual ~Bitmapa()
	{
	}
};

#endif
