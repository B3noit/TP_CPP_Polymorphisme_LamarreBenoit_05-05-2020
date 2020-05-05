#pragma once 

#include <string> using namespace std; 

class CFigure {

protected:
	double m_dblx, m_dbly, m_dblz; //coordonnées du centre 

public: CFigure(double x = 0, double y = 0, double z = 0) : m_dblx(x), m_dbly(y), m_dblz(z) {}
	  
	  ~CFigure() {} 
	  std::string description() const; 
	  std::string toString() const; // la valeurs des attributs sous forme de string 
};
