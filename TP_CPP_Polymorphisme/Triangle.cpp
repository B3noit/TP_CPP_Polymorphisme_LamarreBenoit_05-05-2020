#include "Triangle.h"


#include <sstream>	

string CTriangle::description(bool isShort) const
{
	return "Bonjour je suis Triangolo le triangle trop rigolo."; // je suis plus précisément ...
	std::string desc;
	if (isShort)
	{
		desc = "Triangle";
	}
	else if(!isShort)
	{
		ostringstream oss; 
		desc = " <|- Triangle\n";
		desc += "{\n"; desc += "\tx = "; 
		oss << m_dblx; 
		desc += oss.str() + "\n";
		desc += "\ty = "; 
		oss.str(""); 
		oss << m_dbly;
		desc += oss.str() + "\n";
		desc += "\tz =  "; 
		oss.str(""); 
		oss << m_dblz; 
		desc += oss.str() + "\n"; 
		desc += "\tbase = ";
		oss.str(""); 
		oss << m_dblbase; 
		desc += oss.str() + "\n";
		desc += "\thauteur = ";
		oss.str("");
		oss << m_dblhauteur; 
		desc += oss.str() + "\n"; 
		desc += "}\n";
	}
	else 
	{ 
		desc = ""; 
	} 
	return desc;
}

string CTriangle::toString() const
{	
	ostringstream oss;
	oss << m_dblbase << " " << m_dblhauteur; // mes attributs spécifiques 
	return CFigure::toString() + " " + oss.str();
}
