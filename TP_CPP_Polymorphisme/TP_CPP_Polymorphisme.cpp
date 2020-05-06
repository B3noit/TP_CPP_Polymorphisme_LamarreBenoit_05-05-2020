#include <iostream> 
#include <exception>
#include <iomanip>
#include <list>
#include <fstream>

using namespace std;

#include "CFigure.h"
#include "Triangle.h"
#include "Carre.h" 



void afficherInfos(const CFigure& f);


int main() {
	CTriangle triangle(5, 8); 
	CCarre carre(5); 
	/*cout << endl; 
	//cout << "Triangle :" << endl; 
	cout << "Je suis un " << triangle.description() << endl; 
	cout << "Mes attributs sont : " << " " << triangle.toString() << endl; 
	//cout << "Carre :" << endl;
	cout << "Je suis un " << carre.description() << endl; 
	cout << "Mes attributs sont : " << " " << carre.toString() << endl; cout << endl; return 0 ; 

	afficherInfos(triangle); // pas de souci : un triangle est une figure 
	afficherInfos(carre); // pas de souci : un carré est une figure */


	CFigure* figure;
	list<CFigure*> liste;
	list<CFigure*>::iterator iL;
	cout << endl;
	//cout << "Triangle :" << endl;
	cout << "Je suis un " << triangle.description() << endl;
	cout << "Mes attributs sont : " << " " << triangle.toString() << endl;
	//cout << "Carre :" << endl;
	cout << "Je suis un " << carre.description() << endl;
	cout << "Mes attributs sont : " << " " << carre.toString() << endl;
	cout << endl;
	// Problème n°1 :
	cout << "Problème n°1 :" << endl;
	afficherInfos(triangle);
	afficherInfos(carre);
	cout << endl;
	// Problème n°2 :
	cout << "Problème n°2 :" << endl;
	liste.push_back(&triangle);
	liste.push_back(&carre);

	for (iL = liste.begin(); iL != liste.end(); iL++)
	{
		figure = *iL;
		cout << "Je suis un " << figure->description() << endl;
		cout << "Mes attributs sont : " << " " << figure->toString() << endl;
	}

	cout << endl;
	return 0;

}


//  une  fonction  qui  permet  d’afficher  la  description  d’une  Figure 
void afficherInfos(const CFigure& f)
{
	cout << "Je suis un " << f.description() << endl;
	cout << "Mes attributs sont : " << " " << f.toString() << endl;
}

