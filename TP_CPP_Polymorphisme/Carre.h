#pragma once 

#include <cmath> 
#include <string> 
#include  "CFigure.h" 

using namespace std;
class CCarre : public CFigure 
{
protected: double m_dbllargeur; // une propri�t� sp�cifique aux carr�s 
public: CCarre(double largeur, double x = 0, double y = 0) : CFigure(x, y, 0), m_dbllargeur(largeur) {}
	  ~CCarre() {} 
	  string description() const; // red�finition pour un Carre 
	  string toString() const; // red�finition pour un Carre 
};
