#pragma once 

#include <cmath> 
#include <string> 
#include  "CFigure.h" 

using namespace std;
class CCarre : public CFigure 
{
protected: 
	double m_dbllargeur; // une propri�t� sp�cifique aux carr�s 

public: 
	CCarre(double largeur, double x = 0, double y = 0) : CFigure(x, y, 0), m_dbllargeur(largeur) {}
	~CCarre() {} 
	double perimetre() { return   m_dbllargeur * 4; } 
	double aire() { return m_dbllargeur * m_dbllargeur; }
	string description(bool isShort) const; // red�finition pour un Carre 
	string toString() const; // red�finition pour un Carre 
};
