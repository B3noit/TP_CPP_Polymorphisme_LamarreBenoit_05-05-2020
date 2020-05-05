#include "Carre.h"

#include <sstream>  

using namespace std;


string CCarre::description() const
{
	return "Je suis Carro le carré qui se tient à carreau";// je suis plus précisément ... 
}

string CCarre::toString() const
{
	ostringstream oss;
	oss << m_dbllargeur;  //  moi,  j’ai  une  largeur  en  plus  des  attributs  d’une  Figure 
	return CFigure::toString() + " " + oss.str(); 
}
