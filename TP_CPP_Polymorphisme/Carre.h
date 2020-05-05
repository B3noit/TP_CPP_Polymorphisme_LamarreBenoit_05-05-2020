#pragma once 

#include <cmath> 
#include <string> 
#include  "CFigure.h" 

using namespace std;
class CCarre : public CFigure 
{
protected: double m_dbllargeur; // une propriété spécifique aux carrés 
public: CCarre(double largeur, double x = 0, double y = 0) : CFigure(x, y, 0), m_dbllargeur(largeur) {}
	  ~CCarre() {} 
	  string description() const; // redéfinition pour un Carre 
	  string toString() const; // redéfinition pour un Carre 
};
