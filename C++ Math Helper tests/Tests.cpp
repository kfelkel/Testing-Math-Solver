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

//void Tests::runTests() {
	//AAS
	// std::cout << "AAS Angle B: " << AASfindangleB() << std::endl;
	// std::cout << "AAS side a: " << AASfindsidea() << std::endl;
	// std::cout << "AAS side b: " << AASfindsideb() << std::endl;
	// //SAS
	// std::cout << "SAS side a: " << SASfindsidea() << std::endl;
	// std::cout << "SAS angle B: " << SASfindangleB() << std::endl;
	// std::cout << "SAS angle C: " << SASfindangleC() << std::endl;
	// //SSA
	// std::cout << "SSA angle C: " << SSAfindangleC() << std::endl;
	// std::cout << "SSA angle A: " << SSAfindangleA() << std::endl;
	// std::cout << "SSA side a: " << SSAfindsidea() << std::endl;
	// //SSS
	// std::cout << "SSS angle A: " << SSSfindangleA() << std::endl;
	// std::cout << "SSS angle B: " << SSSfindangleB() << std::endl;
	// std::cout << "SSS angle C: " << SSSfindangleC() << std::endl;
	// //Triangle
	// std::cout << "Triangle Getter A: " << TriangleGetterA() << std::endl;
	// std::cout << "Triangle Getter B: " << TriangleGetterB() << std::endl;
	// std::cout << "Triangle Getter C: " << TriangleGetterC() << std::endl;
	// std::cout << "Triangle Getter a: " << TriangleGettera() << std::endl;
	// std::cout << "Triangle Getter b: " << TriangleGetterb() << std::endl;
	// std::cout << "Triangle Getter c: " << TriangleGetterc() << std::endl;
	// std::cout << "Triangle Getter Height a: " << TriangleGetterHeighta() << std::endl;
	// std::cout << "Triangle Getter Height b: " << TriangleGetterHeightb() << std::endl;
	// std::cout << "Triangle Getter Height c: " << TriangleGetterHeightc() << std::endl;
	// std::cout << "Triangle area: " << Trianglearea() << std::endl;
	// std::cout << "Triangle area: " << Triangleperimeter() << std::endl;
	// std::cout << "Triangle Height a: " << Trianglefindheighta() << std::endl;
	// std::cout << "Triangle Height b: " << Trianglefindheightb() << std::endl;
	// std::cout << "Triangle Height c: " << Trianglefindheightc() << std::endl;
	// //Rectangle
	// std::cout << "Rectangle length: " << Rectanglegetlength() << std::endl;
	// std::cout << "Rectangle width: " << Rectanglegetwidth() << std::endl;
//}

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
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = length;
	rec->width = width;
	double output = rec->getrectanglearea();
	delete rec;
	return output;
}
double Tests::Rectangle_getrectangleperimeter(double length, double width) {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = length;
	rec->width = width;
	double output = rec->getrectangleperimeter();
	delete rec;
	return output;
}
std::string Tests::solveLinear_solveEquation(std::string equation) {
	solvelinear::solveLinear solveLinear;
	solveLinear.equation = equation;
	std::string output = solveLinear.solveEquation();
	return output;
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
