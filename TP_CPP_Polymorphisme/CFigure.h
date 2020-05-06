#pragma once 

#include <string> using namespace std; 


	

class CFigure {

protected:
	double m_dblx, m_dbly, m_dblz; //coordonnées du centre 

public: 
	
	CFigure(double x = 0, double y = 0, double z = 0) : m_dblx(x), m_dbly(y), m_dblz(z) {}
	  
	virtual ~CFigure() {} 

	virtual double perimetre() { return 0; }
	virtual double aire() { return 0; }
	virtual double volume() { return 0; }

	virtual std::string description(bool isShort) { return "Figure"; }
	virtual std::string toString() const; // la valeurs des attributs sous forme de string 
};
