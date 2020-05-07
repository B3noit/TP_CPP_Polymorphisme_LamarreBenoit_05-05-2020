#include <iostream> 
#include <exception>
#include <iomanip>
#include <list>
#include <fstream>

using namespace std;

#include "CFigure.h"
#include "Triangle.h"
#include "Carre.h"
#include "Rectangle.h"
#include "Cercle.h"
#include "Cube.h"
#include "Parallelepipede.h"
#include "Sphere.h"


int main() {

	cout << endl;

	CTriangle triangle(5, 8); 
	cout << "Je suis un " << triangle.description(true) << endl;
	cout << triangle.description(false);
	cout << "Perimetre = " << triangle.perimetre() << endl; 
	cout << "Aire = " << triangle.aire() << endl; 
	cout << "Volume = 0"<< endl << endl;


	CCarre carre(4); 
	cout << "Je suis un " << carre.description(true) << endl;
	cout << carre.description(false); 
	cout << "P�rimetre = " << carre.perimetre() << endl;
	cout << "Aire = " << carre.aire() << endl; 
	cout << "Volume = 0" << endl << endl;


	CRectangle rectangle(5, 4);
	cout << "Rectangle  :  " << endl;
	cout << "P�rimetre = " << rectangle.perimetre() << endl; 
	cout << "Aire = " << rectangle.aire() << endl; 
	cout << "Volume = 0" << endl << endl;


	CCercle cercle(2);// rayon 
	cout  <<  "Cercle  :  "  <<  endl; 
	cout << "P�rimetre = " << cercle.perimetre() << endl;
	cout  <<  "Aire = " << cercle.aire() << endl; 
	cout << "Volume = 0" << endl << endl; 


	CCube cube(6); // largeur 
	cout  <<  "Cube  :  "  <<  endl;
	cout << "P�rimetre = " << cube.perimetre() << endl; 
	cout  <<  "Aire = " << cube.aire() << endl;
	cout << "Volume = " << cube.volume() << endl << endl;


	CParallelepipede  parallelepipede(5, 4, 9);  //  largeur,  longueur,  hauteur 
	cout  <<  "Parallelepipede  :  "  <<  endl; 
	cout << "P�rimetre = " << parallelepipede.perimetre() << endl;
	cout  <<  "Aire = " << parallelepipede.aire() << endl; 
	cout << "Volume = " << parallelepipede.volume() << endl << endl;


	CSphere sphere(3); // rayon 
	cout  <<  "Sphere  :  "  <<  endl; 
	cout << "P�rimetre = " << sphere.perimetre() << endl; 
	cout  <<  "Aire = " << sphere.aire() << endl; 
	cout << "Volume = " << sphere.volume() << endl << endl; 
}




