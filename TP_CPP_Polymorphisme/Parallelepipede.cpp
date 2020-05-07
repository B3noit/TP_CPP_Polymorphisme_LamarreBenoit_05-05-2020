#include "Parallelepipede.h"

#include <sstream>  

using namespace std;

string CParallelepipede::description(bool isShort) const
{
	//return "Je suis Carro le carré qui se tient à carreau";// je suis plus précisément ... 
	std::string desc;
	if (isShort)
	{
		desc = "Parallelepipede";
	}
	else if (!isShort)
	{
		ostringstream oss;
		desc = " <|- Parallelepiped\n";
		desc += "{\n"; desc += "\tx = ";
		oss << m_dblx;
		desc += oss.str() + "\n";
		desc += "\ty = "; oss.str("");
		oss << m_dbly;
		desc += oss.str() + "\n";
		desc += "\tz =  ";
		oss.str(""); oss << m_dblz;
		desc += oss.str() + "\n";
		desc += "\tlargeur = ";
		oss.str(""); oss << m_dbllargeur;
		desc += oss.str() + "\n";
		desc += "\tlongueur = ";
		oss.str(""); oss << m_dbllongueur;
		desc += oss.str() + "\n";
		desc += "\tlargeur = ";
		oss.str(""); oss << m_dblhauteur;
		desc += oss.str() + "\n";
		desc += "}\n";
	}
	else
	{
		desc = "";
	}
	return desc;
}

string CParallelepipede::toString() const
{
	ostringstream oss;
	oss << m_dbllargeur << " " << m_dbllongueur << " " << m_dblhauteur;  //  moi,  j’ai  une  largeur,une longueur et une hauteur  en  plus  des  attributs  d’une  Figure 
	return CFigure::toString() + " " + oss.str();
}