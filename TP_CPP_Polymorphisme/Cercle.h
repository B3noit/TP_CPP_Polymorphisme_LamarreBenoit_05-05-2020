#pragma once

#include <cmath> 
#include <string> 
#include  "CFigure.h"  

using namespace std;

class CCercle : public CFigure
{
protected:
	double  m_dblrayon;  //  les  propriétés  spécifiques  d’un  cercle

public:
	CCercle(double rayon, double x = 0) : CFigure(x, 0, 0), m_dblrayon(rayon) {}

	~CCercle() {}

	double perimetre() 
	{
		return sqrt(m_dblrayon * 2 * 3.14);
	}

	double aire()
	{ 
		return (m_dblrayon * m_dblrayon *3.14); 
	}

	string description(bool isShort) const; // redéfinition pour un Cercle
	string toString() const; // redéfinition pour un Cercle
};

