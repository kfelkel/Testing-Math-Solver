#include <iostream>
#include "rectangle.h"
#include "triangle.h"
#include "cube.h"
#include "pyramid.h"
#include "polygon.h"
#include "aas.h"
#include "sss.h"
#include "sas.h"
#include "ssa.h"
#include "polygon3d.h"
#include "circle.h"
#include "ellipse.h"
#include "parabola.h"
#include <string>
#include "Tests.h"
using namespace std;

int main(){
	int exit = 0;
	Tests m;
	m.runTests();
	//do{
	//	system("CLS");
	//	cout << "Choose a shape to solve (Enter the corresponding number or 0 to exit): " << endl << endl;
	//	cout << "\t  Linear\t\t  Conics\t\t 3-Dimensional" << endl;
	//	cout << "\t1) Triangle\t\t4) Circle\t\t7) Pyramid" << endl;
	//	cout << "\t2) Rectangle\t\t5) Ellipse\t\t8) Cube" << endl;
	//	cout << "\t3) Polygon\t\t6) Parabola\t\t9) 3D Polygon" << endl << endl;
	//	cin >> exit;

	//	if (exit <= 10 && exit > 0)
	//	{
	//		do
	//		{
	//			system("CLS");
	//			if (exit == 1)
	//			{
	//				int type;
	//				cout << "Which Triangle do you need solved (Enter corresponding number)? " << endl << endl;
	//				cout << "\t1) SSS\t\t3) SSA" << endl;
	//				cout << "\t2) SAS\t\t4) AAS" << endl;
	//				cin >> type;
	//				system("CLS");
	//				if (type == 1)
	//				{
	//					sss::SSS* sss = new sss::SSS;
	//					cin >> *sss;
	//					sss->SSSsolve();
	//					cout << *sss << endl << endl;
	//					cout << "Enter 1 to go back or 0 to exit program" << endl;
	//					cin >> exit;
	//					delete sss;
	//				}
	//				if (type == 2)
	//				{
	//					sas::SAS* sas = new sas::SAS;
	//					cin >> *sas;
	//					sas->SASsolve();
	//					cout << *sas << endl << endl;
	//					cout << "Enter 1 to go back or 0 to exit program" << endl;
	//					cin >> exit;
	//					delete sas;
	//				}
	//				if (type == 3)
	//				{
	//					ssa::SSA* ssa = new ssa::SSA;
	//					cin >> *ssa;
	//					ssa->SSAsolve();
	//					cout << *ssa << endl << endl;
	//					cout << "Enter 1 to go back or 0 to exit program" << endl;
	//					cin >> exit;
	//					delete ssa;
	//				}
	//				if (type == 4)
	//				{
	//					aas::AAS* aas = new aas::AAS;
	//					cin >> *aas;
	//					aas->AASsolve();
	//					cout << *aas << endl << endl;
	//					cout << "Enter 1 to go back or 0 to exit program" << endl;
	//					cin >> exit;
	//					delete aas;
	//				}
	//			}
	//			if (exit == 2)
	//			{
	//				rectangle::Rectangle* rec = new rectangle::Rectangle;
	//				cin >> *rec;
	//				rec->rectanglesolve();
	//				cout << *rec << endl << endl;
	//				cout << "Enter 1 to go back or 0 to exit program" << endl;
	//				cin >> exit;
	//				delete rec;
	//			}
	//			if (exit == 3)
	//			{
	//				polygon::Polygon* poly = new polygon::Polygon;
	//				cin >> *poly;
	//				poly->polygonsolve();
	//				cout << *poly << endl << endl;
	//				cout << "Enter 1 to go back or 0 to exit program" << endl;
	//				cin >> exit;
	//				delete poly;
	//			}
	//			if (exit == 4)
	//			{
	//				circle::Circle* circ = new circle::Circle;
	//				cin >> *circ;
	//				circ->circlesolve();
	//				cout << *circ << endl << endl;
	//				cout << "Enter 1 to go back or 0 to exit program" << endl;
	//				cin >> exit;
	//				delete circ;
	//			}
	//			if (exit == 5)
	//			{
	//				ellipse::Ellipse* ell = new ellipse::Ellipse;
	//				cin >> *ell;
	//				ell->ellipsesolve();
	//				cout << *ell << endl << endl;
	//				cout << "Enter 1 to go back or 0 to exit program" << endl;
	//				cin >> exit;
	//				delete ell;
	//			}
	//			if (exit == 6)
	//			{
	//				parabola::Parabola* par = new parabola::Parabola;
	//				cin >> *par;
	//				par->parabolasolve();
	//				cout << *par << endl << endl;
	//				cout << "Enter 1 to go back or 0 to exit program" << endl;
	//				cin >> exit;
	//				delete par;
	//			}
	//			if (exit == 7)
	//			{
	//				pyramid::Pyramid* pyr = new pyramid::Pyramid;
	//				cin >> *pyr;
	//				pyr->pyramidsolve();
	//				cout << *pyr << endl << endl;
	//				cout << "Enter 1 to go back or 0 to exit program" << endl;
	//				cin >> exit;
	//				delete pyr;
	//			}
	//			if (exit == 8)
	//			{
	//				cube::Cube* cu = new cube::Cube;
	//				cin >> *cu;
	//				cu->cubesolve();
	//				cout << *cu << endl << endl;
	//				cout << "Enter 1 to go back or 0 to exit program" << endl;
	//				cin >> exit;
	//				delete cu;
	//			}
	//			if (exit == 9)
	//			{
	//				polygon3d::Polygon3D* poly3D = new polygon3d::Polygon3D;
	//				cin >> *poly3D;
	//				poly3D->polygon3dsolve();
	//				cout << *poly3D << endl << endl;
	//				cout << "Enter 1 to go back or 0 to exit program" << endl;
	//				cin >> exit;
	//				delete poly3D;
	//			}
	//			if (exit == 10) {
	//				string equation;
	//				cout << "Enter equation" << endl;
	//				cin >> equation;
	//				int n = equation.size(), sign = 1, coeff = 0;
	//				int total = 0, i = 0;

	//				// Traverse the equation 
	//				for (int j = 0; j < n; j++) {
	//					if (equation[j] == '+' || equation[j] == '-') {
	//						if (j > i)
	//							total += sign * stoi(equation.substr(i, j - i));
	//						i = j;
	//					}

	//					// For cases such as: x, -x, +x 
	//					else if (equation[j] == 'x') {
	//						if ((i == j) || equation[j - 1] == '+')
	//							coeff += sign;
	//						else if (equation[j - 1] == '-')
	//							coeff -= sign;
	//						else
	//							coeff += sign * stoi(equation.substr(i, j - i));
	//						i = j + 1;
	//					}

	//					// Flip sign once '=' is seen 
	//					else if (equation[j] == '=') {
	//						if (j > i)
	//							total += sign * stoi(equation.substr(i, j - i));
	//						sign = -1;
	//						i = j + 1;
	//					}
	//				}

	//				// There may be a number left in the end 
	//				if (i < n)
	//					total += sign * stoi(equation.substr(i));

	//				// For infinite solutions 
	//				if (coeff == 0 && total == 0)
	//					cout << "Infinite solutions";

	//				// For no solution 
	//				if (coeff == 0 && total)
	//					cout << "No solution";

	//				// x = total sum / coeff of x 
	//				// '-' sign indicates moving 
	//				// numeric value to right hand side 
	//				int ans = -total / coeff;
	//				int x = 1;
	//				
	//			}
	//		} while (exit != 1 && exit != 0);
	//	}
	//} while (exit != 0);
}

