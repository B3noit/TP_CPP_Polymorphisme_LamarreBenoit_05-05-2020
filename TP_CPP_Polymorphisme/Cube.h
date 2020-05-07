#pragma once

#include <cmath> 
#include <string> 
#include  "Carre.h" 
#include  "CFigure.h" 

using namespace std;

class CCube : public CCarre
{
protected:
	double m_dbllargeur; // une propri�t� sp�cifique aux cubes

public:
	CCube(double largeur, double x = 0, double y = 0) : CCarre(largeur, x = 0, y = 0){}
	~CCube() {}

	double aire()
	{ 
		return m_dbllargeur * m_dbllargeur; 
	}

	double volume()
	{
		return (m_dbllargeur * m_dbllargeur * 6);
	}
	string description(bool isShort) const; // red�finition pour un Carre 
	string toString() const; // red�finition pour un Carre 
};

