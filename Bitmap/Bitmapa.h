#ifndef BITMAPA_H
#define BITMAPA_H

class Bitmapa
{
public:
	virtual unsigned dlugosc() const = 0;
	virtual unsigned szerokosc() const = 0;
	virtual bool & operator() (unsigned x, unsigned y) = 0;
	virtual bool operator() (unsigned x, unsigned y) const = 0;
	virtual ~Bitmapa()
	{
	}
};

#endif
