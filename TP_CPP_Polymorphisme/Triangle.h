#pragma once 

#include <cmath> 
#include <string> 
#include"CFigure.h" 

using namespace std;

class CTriangle : public  CFigure 
{
protected: double  m_dblbase, m_dblhauteur;  //  les  propri�t�s  sp�cifiques  d�un  Triangle 
public: CTriangle(double base, double hauteur, double x = 0, double y = 0) : CFigure(x, y, 0), m_dblbase(base), m_dblhauteur(hauteur) {}
	  ~CTriangle() {} 
	  string description() const; // red�finition pour un Triangle
	  string toString() const; // red�finition pour un Triangle 
};

