#include "Sphere.h"

#include <sstream>  

using namespace std;


string CSphere::description(bool isShort) const
{
	std::string desc;
	if (isShort)
	{
		desc = "Sphere";
	}
	else if (!isShort)
	{
		ostringstream oss;
		desc = " <|- Sphere\n";
		desc += "{\n"; desc += "\tx = ";
		oss << m_dblx;
		desc += oss.str() + "\n";
		desc += "\ty = "; oss.str("");
		oss << m_dbly;
		desc += oss.str() + "\n";
		desc += "\tz =  ";
		oss.str(""); oss << m_dblz;
		desc += oss.str() + "\n";
		desc += "\trayon = ";
		oss.str(""); oss << m_dblrayon;
		desc += oss.str() + "\n";
		desc += "}\n";
	}
	else
	{
		desc = "";
	}
	return desc;
}

string CSphere::toString() const
{
	ostringstream oss;
	oss << m_dblrayon;  //  moi,  j�ai  un rayon  en  plus  des  attributs  d�une  Figure 
	return CFigure::toString() + " " + oss.str();
}