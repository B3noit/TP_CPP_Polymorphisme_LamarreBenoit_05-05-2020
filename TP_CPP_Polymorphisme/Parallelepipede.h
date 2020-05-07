#pragma once

#include <cmath> 
#include <string> 
#include  "Rectangle.h"  

using namespace std;


class CParallelepipede : public CRectangle
{

protected:
	double m_dbllargeur , m_dbllongueur, m_dblhauteur; // une propri�t� sp�cifique aux cubes

public:
	CParallelepipede(double largeur, double longueur,double hauteur, double x = 0, double y = 0) : CRectangle(largeur, longueur,  x = 0,  y = 0), m_dbllargeur(largeur), m_dbllongueur(longueur), m_dblhauteur(hauteur) {}
	~CParallelepipede() {}

	double aire()
	{
		return (m_dblhauteur * m_dbllargeur * 2) + (m_dbllargeur * m_dbllongueur * 2) + (m_dblhauteur * m_dbllongueur * 2);
	}

	double volume()
	{
		return (m_dbllargeur * m_dbllongueur * m_dblhauteur);
	}
	string description(bool isShort) const; // red�finition pour un Carre 
	string toString() const; // red�finition pour un Carre 
};

