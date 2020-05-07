#pragma once

#include <cmath> 
#include <string> 
#include  "CFigure.h"  

using namespace std;

class CRectangle : public CFigure
{
protected:
	double m_dbllargeur; // une propriété spécifique aux rectangles
	double m_dbllongueur; // une propriété spécifique aux rectangles

public:
	CRectangle(double largeur,double longeur, double x = 0, double y = 0) : CFigure(x, y, 0), m_dbllargeur(largeur), m_dbllongueur(longeur){}
	~CRectangle() {}
	double perimetre() { return   (m_dbllargeur + m_dbllongueur) * 2; }
	double aire() { return m_dbllargeur * m_dbllongueur; }
	string description(bool isShort) const; // redéfinition pour un Rectangle 
	string toString() const; // redéfinition pour un Rectangle

};

