#include "pch.h"
#include "Tests.h"
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
#include "solveLinear.h"
#include <string>
#include <sstream>
#include <iostream>

//AAS
double Tests::AAS_AASangleB(double angleA, double angleC) {
	aas::AAS* aas = new aas::AAS;
	aas->angleA = angleA;
	aas->angleC = angleC;
	aas->AASangleB();
	double output = (aas->gettriangleangleB());
	delete aas;
	return output;
}
double Tests::AAS_AASsidea(double angleA, double angleC, double sidec) {
	aas::AAS* aas = new aas::AAS;
	aas->angleA = angleA;
	aas->angleC = angleC;
	aas->sidec = sidec;
	aas->AASsidea();
	double output = (aas->gettrianglesidea());
	delete aas;
	return output;
}
double Tests::AAS_AASsideb(double angleA, double angleC, double sidec) {
	aas::AAS* aas = new aas::AAS;
	aas->angleB = angleA;
	aas->angleC = angleC;
	aas->sidec = sidec;
	aas->AASsideb();
	double output = (aas->gettrianglesideb());
	delete aas;
	return output;
}
//SAS
double Tests::SAS_SASsidea(double sideb, double sidec, double angleA) {
	sas::SAS* sas = new sas::SAS;
	sas->sideb = sideb;
	sas->sidec = sidec;
	sas->angleA = angleA;
	sas->SASsidea();
	double output = (sas->gettrianglesidea());
	delete sas;
	return output;
}
double Tests::SAS_SASangleB(double sidea, double sideb, double sidec) {
	sas::SAS* sas = new sas::SAS;
	sas->sidea = sidea;
	sas->sideb = sideb;
	sas->sidec = sidec;
	sas->SASangleB();
	double output = (sas->gettriangleangleB());
	delete sas;
	return output;
}
double Tests::SAS_SASangleC(double sidea, double sideb, double sidec) {
	sas::SAS* sas = new sas::SAS;
	sas->sidea = sidea;
	sas->sideb = sideb;
	sas->sidec = sidec;
	sas->SASangleC();
	double output = (sas->gettriangleangleC());
	delete sas;
	return output;
}
//SSA
double Tests::SSA_SSAangleC(double angleB, double sideb, double sidec) {
	ssa::SSA* ssa = new ssa::SSA;
	ssa->angleB = angleB;
	ssa->sideb = sideb;
	ssa->sidec = sidec;
	ssa->SSAangleC();
	double output = (ssa->gettriangleangleC());
	delete ssa;
	return output;
}
double Tests::SSA_SSAangleA(double angleB, double angleC) {
	ssa::SSA* ssa = new ssa::SSA;
	ssa->angleB = angleB;
	ssa->angleC = angleC;
	ssa->SSAangleA();
	double output = (ssa->gettriangleangleA());
	delete ssa;
	return output;
}
double Tests::SSA_SSAsidea(double angleA, double angleC, double sidec) {
	ssa::SSA* ssa = new ssa::SSA;
	ssa->angleA = angleA;
	ssa->angleC = angleC;
	ssa->sidec = sidec;
	ssa->SSAsidea();
	double output = (ssa->gettrianglesidea());
	delete ssa;
	return output;
}
//SSS
double Tests::SSS_SSSangleA(double sidea, double sideb, double sidec) {
	sss::SSS* sss = new sss::SSS;
	sss->sidea = 2;
	sss->sideb = 3;
	sss->sidec = 4;
	sss->SSSangleA();
	double output = (sss->gettriangleangleA());
	delete sss;
	return output;
}
double Tests::SSS_SSSangleB(double sidea, double sideb, double sidec) {
	sss::SSS* sss = new sss::SSS;
	sss->sidea = 2;
	sss->sideb = 3;
	sss->sidec = 4;
	sss->SSSangleB();
	double output = (sss->gettriangleangleB());
	delete sss;
	return output;
}
double Tests::SSS_SSSangleC(double sidea, double sideb, double sidec) {
	sss::SSS* sss = new sss::SSS;
	sss->sidea = 2;
	sss->sideb = 3;
	sss->sidec = 4;
	sss->SSSangleC();
	double output = (sss->gettriangleangleC());
	delete sss;
	return output;
}
//Triangle
double Tests::Triangle_gettriangleangleA(double angleA) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = angleA;
	double output = triangle->gettriangleangleA();
	delete triangle;
	return output;
}
double Tests::Triangle_gettriangleangleB(double angleB) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleB = angleB;
	double output = triangle->gettriangleangleB();
	delete triangle;
	return output;
}
double Tests::Triangle_gettriangleangleC(double angleC) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleC = angleC;
	double output = triangle->gettriangleangleC();
	delete triangle;
	return output;
}
double Tests::Triangle_gettrianglesidea(double sidea) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = sidea;
	double output = triangle->gettrianglesidea();
	delete triangle;
	return output;
}
double Tests::Triangle_gettrianglesideb(double sideb) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sideb = sideb;
	double output = triangle->gettrianglesideb();
	delete triangle;
	return output;
}
double Tests::Triangle_gettrianglesidec(double sidec) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidec = sidec;
	double output = triangle->gettrianglesidec();
	delete triangle;
	return output;
}
double Tests::Triangle_gettriangleheighta(double heighta) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heighta = heighta;
	double output = triangle->gettriangleheighta();
	delete triangle;
	return output;
}
double Tests::Triangle_gettriangleheightb(double heightb) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heightb = heightb;
	double output = triangle->gettriangleheightb();
	delete triangle;
	return output;
}
double Tests::Triangle_gettriangleheightc(double heightc) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heightc = heightc;
	double output = triangle->gettriangleheightc();
	delete triangle;
	return output;
}
double Tests::Triangle_gettrianglearea(double sidea, double heighta) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = sidea;
	triangle->heighta = heighta;
	double output = triangle->gettrianglearea();
	delete triangle;
	return output;
}
double Tests::Triangle_gettriangleperimeter(double sidea, double sideb, double sidec) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = sidea;
	triangle->sideb = sideb;
	triangle->sidec = sidec;
	double output = triangle->gettriangleperimeter();
	delete triangle;
	return output;
}
double Tests::Triangle_triangleheighta(double angleB, double angleC, double sidea) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleB = angleB;// 63;
	triangle->angleC = angleC;// 29;
	triangle->sidea = sidea;// 4;
	triangle->triangleheighta();
	double output = triangle->gettriangleheighta();//(1.7 <= triangle->gettriangleheighta() && 1.8 >= triangle->gettriangleheighta());
	delete triangle;
	return output;
}
double Tests::Triangle_triangleheightb(double angleA, double angleC, double sideb) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = angleA;// 34;
	triangle->angleC = angleC;// 29;
	triangle->sideb = sideb;// 3;
	triangle->triangleheightb();
	double output = triangle->gettriangleheightb();//(0.9 <= triangle->gettriangleheightb() && 1.0 >= triangle->gettriangleheightb());
	delete triangle;
	return output;
}
double Tests::Triangle_triangleheightc(double angleA, double angleB, double sidec) {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = angleA;// 34;
	triangle->angleB = angleB;// 29;
	triangle->sidec = sidec;// 3;
	triangle->triangleheightc();
	double output = triangle->gettriangleheightc();//(0.9 <= triangle->gettriangleheightc() && 1.0 >= triangle->gettriangleheightc());
	delete triangle;
	return output;
}

std::string Tests::Triangle_ostreamOperator(double sidea, double sideb, double sidec, double angleA, double angleB, double angleC) {
	std::string returnString;
	triangle::Triangle triangle(sidea, sideb, sidec, angleA, angleB, angleC);
	triangle.trianglesolve();
	std::stringstream output;
	output << triangle;
	returnString = output.str();
	return returnString;
}
//Rectangle
double Tests::Rectangle_getrectanglelength(double length) {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = length;
	double output = rec->getrectanglelenght();
	delete rec;
	return output;
}
double Tests::Rectangle_getrectanglewidth(double width) {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->width = width;
	double output = rec->getrectanglewidth();
	delete rec;
	return output;
}
double Tests::Rectangle_getrectanglearea(double length, double width) {
	rectangle::Rectangle rect;
	std::stringstream inputBuffer;
	inputBuffer << length << std::endl << width;
	inputBuffer >> rect;
	return rect.getrectanglearea();
}
double Tests::Rectangle_getrectangleperimeter(double length, double width) {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = length;
	rec->width = width;
	double output = rec->getrectangleperimeter();
	delete rec;
	return output;
}
std::string Tests::Rectangle_ostreamOperator(double length, double width) {
	std::string returnString;
	rectangle::Rectangle rect(length, width);
	rect.rectanglesolve();
	std::stringstream output;
	output << rect;
	returnString = output.str();
	return returnString;
}
//solveLinear
std::string Tests::solveLinear_solveEquation(std::string equation) {
	solvelinear::solveLinear solveLinear;
	solveLinear.equation = equation;
	std::string output = solveLinear.solveEquation();
	return output;
}

std::string Tests::solveLinear_getEquation(std::string equation) {
	solvelinear::solveLinear solveLinear;
	solveLinear.equation = equation;
	std::string output = solveLinear.getEquation();
	return output;
}
//Polygon
double Tests::Polygon_getpolygonsides(double sides) {
	polygon::Polygon* polygon = new polygon::Polygon;
	polygon->sides = sides;
	double output = polygon->getpolygonsides();
	delete polygon;
	return output;
}
double Tests::Polygon_getpolygonlength(double length) {
	polygon::Polygon* polygon = new polygon::Polygon;
	polygon->length = length;
	double output = polygon->getpolygonlength();
	delete polygon;
	return output;
}
double Tests::Polygon_polygonapothem(double sides, double length) {
	polygon::Polygon polygon;
	std::stringstream input;
	input << sides << std::endl << length;
	input >> polygon;
	polygon.polygonapothem();
	double output = polygon.getpolygonapothem();
	return output;
}
double Tests::Polygon_polygonradius(double sides, double length) {
	polygon::Polygon* polygon = new polygon::Polygon(sides,length);
	polygon->sides = sides;
	polygon->length = length;
	polygon->polygonradius();
	double output = polygon->getpolygonradius();
	delete polygon;
	return output;
}
double Tests::Polygon_polygonarea(double sides, double length) {
	polygon::Polygon* polygon = new polygon::Polygon;
	polygon->sides = sides;
	polygon->length = length;

	polygon->polygonarea();
	double output = polygon->getpolygonarea();
	delete polygon;
	return output;
}
double Tests::Polygon_polygonperimeter(double sides, double length) {
	polygon::Polygon* polygon = new polygon::Polygon;
	polygon->sides = sides;
	polygon->length = length;
	polygon->polygonperimeter();
	double output = polygon->getpolygonperimeter();
	delete polygon;
	return output;
}
std::string Tests::Polygon_ostreamOperator(double sides, double length) {
	std::string returnString;
	polygon::Polygon polygon(sides,length);
	polygon.polygonsolve();
	std::stringstream output;
	output << polygon;
	returnString = output.str();
	return returnString;
}
//Circle
double Tests::Circle_getcirclediameter(double radius) {
	circle::Circle circ;
	circ.radius = radius;
	double output = circ.getcirclediameter();
	return output;
}
double Tests::Circle_getcirclecircumference(double radius) {
	circle::Circle circ;
	circ.radius = radius;
	double output = circ.getcirclecircumference();
	return output;
}

double Tests::Circle_getcircleradius(double radius) {
	circle::Circle circ(radius);
	double output = circ.getcircleradius();
	return output;
}

double Tests::Circle_getcirclearea(double radius) {
	circle::Circle circ;
	circ.radius = radius;
	double output = circ.getcirclearea();
	return output;
}

std::string Tests::Circle_ostreamOperator(double radius) {
	circle::Circle circ;
	std::stringstream input;
	std::stringstream output;
	input << radius;
	input >> circ;
	circ.circlesolve();
	output << circ;
	return output.str();
}

//Ellipse
double Tests::Ellipse_getellipsemajoraxis(double majorAxis, double minorAxis) {
	ellipse::Ellipse ellipse(majorAxis, minorAxis);
	double output = ellipse.getellipsemajoraxis();
	return output;
}
double Tests::Ellipse_getellipseminoraxis(double majorAxis, double minorAxis) {
	ellipse::Ellipse ellipse(majorAxis, minorAxis);
	double output = ellipse.getellipseminoraxis();
	return output;
}
double Tests::Ellipse_getellipsefoci(double majorAxis, double minorAxis) {
	ellipse::Ellipse ellipse;
	ellipse.majoraxis = majorAxis;
	ellipse.minoraxis = minorAxis;
	double output = ellipse.getellipsefoci();
	return output;
}
double Tests::Ellipse_getellipsedirectrix(double majorAxis, double minorAxis) {
	ellipse::Ellipse ellipse;
	ellipse.majoraxis = majorAxis;
	ellipse.minoraxis = minorAxis;
	ellipse.ellipsefoci();
	double output = ellipse.getellipsedirectrix();
	return output;
}
double Tests::Ellipse_getellipsevertex(double majorAxis, double minorAxis) {
	ellipse::Ellipse ellipse;
	ellipse.majoraxis = majorAxis;
	ellipse.minoraxis = minorAxis;
	double output = ellipse.getellipsevertex();
	return output;
}
double Tests::Ellipse_getellipsearea(double majorAxis, double minorAxis) {
	ellipse::Ellipse ellipse;
	ellipse.majoraxis = majorAxis;
	ellipse.minoraxis = minorAxis;
	double output = ellipse.getellipsearea();
	return output;
}
std::string Tests::Ellipse_ostreamOperator(double majorAxis, double minorAxis) {
	ellipse::Ellipse ellipse;
	std::stringstream input;
	std::stringstream output;
	input << majorAxis << std::endl << minorAxis;
	input >> ellipse;
	ellipse.ellipsesolve();
	output << ellipse;
	return output.str();
}
//Cube
double Tests::Cube_getcubeheight(double length, double width, double height) {
	cube::Cube cube(length, width, height);
	return cube.getcubeheight();
}
double Tests::Cube_getcubearea(double length, double width, double height) {
	cube::Cube cube(length, width, height);
	return cube.getcubearea();
}
double Tests::Cube_getcubeperimeter(double length, double width, double height) {
	cube::Cube cube(length, width, height);
	return cube.getcubeperimeter();
}
double Tests::Cube_getcubevolume(double length, double width, double height) {
	cube::Cube cube;
	std::stringstream input;
	input << length << std::endl;
	input << width << std::endl;;
	input << height << std::endl;
	input >> cube;
	//cube::Cube cube(length, width, height);
	return cube.getcubevolume();
}
std::string Tests::Cube_ostreamOperator(double length, double width, double height) {
	std::string returnString;
	cube::Cube cube(length, width, height);
	cube.cubesolve();
	std::stringstream output;
	output << cube;
	returnString = output.str();
	return returnString;
}

//Parabola
double Tests::Parabola_getparabolavaluea(double valuea, double valueb, double valuec) {
	parabola::Parabola parabola;
	std::stringstream input;
	input << valuea << std::endl;
	input << valueb<< std::endl;;
	input << valuec << std::endl;
	input >> parabola;
	return parabola.getparabolavaluea();
}
double Tests::Parabola_getparabolavalueb(double valuea, double valueb, double valuec) {
	parabola::Parabola parabola(valuea, valueb, valuec);
	return parabola.getparabolavalueb();
}
double Tests::Parabola_getparabolavaluec(double valuea, double valueb, double valuec) {
	parabola::Parabola parabola(valuea, valueb, valuec);
	return parabola.getparabolavaluec();
}
double Tests::Parabola_getparabolavertexX(double valuea, double valueb, double valuec) {
	parabola::Parabola parabola(valuea, valueb, valuec);
	return parabola.getparabolavertexX();
}
double Tests::Parabola_getparabolavertexY(double valuea, double valueb, double valuec) {
	parabola::Parabola parabola(valuea, valueb, valuec);
	return parabola.getparabolavertexY();
}
double Tests::Parabola_getparaboladirectrix(double valuea, double valueb, double valuec) {
	parabola::Parabola parabola(valuea, valueb, valuec);
	return parabola.getparaboladirectrix();
}
double Tests::Parabola_getparabolafocus(double valuea, double valueb, double valuec) {
	parabola::Parabola parabola(valuea, valueb, valuec);
	return parabola.getparabolafocus();
}
std::string Tests::Parabola_ostreamOperator(double valuea, double valueb, double valuec) {
	std::string returnString;
	parabola::Parabola parabola(valuea, valueb, valuec);
	parabola.parabolasolve();
	std::stringstream output;
	output << parabola;
	returnString = output.str();
	return returnString;
}

//Polygon3D
double Tests::Polygon3D_getpolygon3dheight(int sides, double length, double height) {
	polygon3d::Polygon3D polygon3d(sides, length, height);
	return polygon3d.getpolygon3dheight();
}
double Tests::Polygon3D_getpolygon3darea(int sides, double length, double height) {
	polygon3d::Polygon3D polygon3d;
	std::stringstream input;
	input << sides << std::endl << length << std::endl << height;
	input >> polygon3d;
	return polygon3d.getpolygon3darea();
}
double Tests::Polygon3D_getpolygon3dperimeter(int sides, double length, double height) {
	polygon3d::Polygon3D polygon3d(sides, length, height);
	return polygon3d.getpolygon3dperimeter();
}
double Tests::Polygon3D_getpolygon3dvolume(int sides, double length, double height) {
	polygon3d::Polygon3D polygon3d(sides, length, height);
	return polygon3d.getpolygon3dvolume();
}
std::string Tests::Polygon3D_ostreamOperator(int sides, double length, double height) {
	polygon3d::Polygon3D polygon3d(sides, length, height);
	polygon3d.polygon3dsolve();
	std::stringstream output; 
	output << polygon3d;
	return output.str();
}