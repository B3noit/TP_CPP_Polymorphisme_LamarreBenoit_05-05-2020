#pragma once

#include <cmath> 
#include <string> 
#include  "Carre.h" 

using namespace std;

class CCube : public CCarre
{
protected:
	double m_dbllargeur; // une propriété spécifique aux cubes

public:
	CCube(double largeur, double x = 0, double y = 0) : CCarre(largeur, x = 0, y = 0) , m_dbllargeur(largeur) {}
	~CCube() {}

	double aire()
	{ 
		return (m_dbllargeur * m_dbllargeur * 6); 
	}

	double volume()
	{
		return (m_dbllargeur * m_dbllargeur * m_dbllargeur);
	}
	string description(bool isShort) const; // redéfinition pour un Carre 
	string toString() const; // redéfinition pour un Carre 
};

