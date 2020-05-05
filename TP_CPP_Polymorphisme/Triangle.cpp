#include "Triangle.h"

#include <sstream>	

string CTriangle::description() const
{
	return "Bonjour je suis Triangolo le triangle trop rigolo."; // je suis plus pr�cis�ment ...
}

string CTriangle::toString() const
{
	ostringstream oss;
	oss << m_dblbase << " " << m_dblhauteur; // mes attributs sp�cifiques 
	return CFigure::toString() + " " + oss.str();
}
