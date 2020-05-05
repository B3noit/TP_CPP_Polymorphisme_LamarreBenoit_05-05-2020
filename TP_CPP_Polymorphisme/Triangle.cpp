#include "Triangle.h"

#include <sstream>	

string CTriangle::description() const
{
	return "Bonjour je suis Triangolo le triangle trop rigolo."; // je suis plus précisément ...
}

string CTriangle::toString() const
{
	ostringstream oss;
	oss << m_dblbase << " " << m_dblhauteur; // mes attributs spécifiques 
	return CFigure::toString() + " " + oss.str();
}
