#include  "CFigure.h"
#include <sstream>  

using namespace std;


std::string CFigure::description() const
{
	return std::string();
}

std::string CFigure::toString() const
{
	ostringstream oss; 
	oss << m_dblx << " " << m_dbly << " " << m_dblz; // mes attributs sous forme de string 
	return oss.str(); 
}
