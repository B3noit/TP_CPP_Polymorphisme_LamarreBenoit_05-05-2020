#include "Carre.h"

#include <sstream>  

using namespace std;


string CCarre::description() const
{
	return "Je suis Carro le carr� qui se tient � carreau";// je suis plus pr�cis�ment ... 
}

string CCarre::toString() const
{
	ostringstream oss;
	oss << m_dbllargeur;  //  moi,  j�ai  une  largeur  en  plus  des  attributs  d�une  Figure 
	return CFigure::toString() + " " + oss.str(); 
}
