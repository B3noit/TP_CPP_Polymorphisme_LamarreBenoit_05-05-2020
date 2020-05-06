#include <iostream> 

using namespace std;

#include "CFigure.h"
#include "Triangle.h"
#include "Carre.h" 

//  une  fonction  qui  permet  d’afficher  la  description  d’une  Figure 
void afficherInfos(const CFigure& f)
{
	cout << "Je suis un " << f.description() << endl;
	cout << "Mes attributs sont : " << " " << f.toString() << endl;
}

int main() {
	CTriangle triangle(5, 8); 
	CCarre carre(4); 
	/*cout << endl; 
	//cout << "Triangle :" << endl; 
	cout << "Je suis un " << triangle.description() << endl; 
	cout << "Mes attributs sont : " << " " << triangle.toString() << endl; 
	//cout << "Carre :" << endl;
	cout << "Je suis un " << carre.description() << endl; 
	cout << "Mes attributs sont : " << " " << carre.toString() << endl; cout << endl; return 0 ; */

	afficherInfos(triangle); // pas de souci : un triangle est une figure 
	afficherInfos(carre); // pas de souci : un carré est une figure 
}


