#pragma once

#include <cmath> 
#include <string> 
#include  "Cercle.h"  

using namespace std;

class CSphere : public CCercle
{
protected:
	double  m_dblrayon;  //  les  propriétés  spécifiques  d’un  cercle

public:
	CSphere(double rayon, double x = 0) : CCercle(rayon, x = 0), m_dblrayon(rayon) {}

	~CSphere() {}


	double aire()
	{
		return ((m_dblrayon * m_dblrayon) * 3.14 * 4);
	}

	double volume()
	{
		return (((m_dblrayon * m_dblrayon * m_dblrayon)/3) * 3.14 * 4);
	}

	string description(bool isShort) const; // redéfinition pour un Cercle
	string toString() const; // redéfinition pour un Cercle
};

