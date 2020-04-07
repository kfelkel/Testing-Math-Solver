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
#include <string>

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
double Tests::TriangleGetterA() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = 30;
	double output = (triangle->gettriangleangleA());
	delete triangle;
	return output;
}
double Tests::TriangleGetterB() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleB = 30;
	double output = (triangle->gettriangleangleB());
	delete triangle;
	return output;
}
double Tests::TriangleGetterC() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleC = 30;
	double output = (triangle->gettriangleangleC());
	delete triangle;
	return output;
}
double Tests::TriangleGettera() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = 1;
	double output = (triangle->gettrianglesidea());
	delete triangle;
	return output;
}
double Tests::TriangleGetterb() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sideb = 2;
	double output = (triangle->gettrianglesideb());
	delete triangle;
	return output;
}
double Tests::TriangleGetterc() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidec = 3;
	double output = (triangle->gettrianglesidec());
	delete triangle;
	return output;
}
double Tests::TriangleGetterHeighta() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heighta = 4;
	double output = (triangle->gettriangleheighta());
	delete triangle;
	return output;
}
double Tests::TriangleGetterHeightb() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heightb = 5;
	double output = (triangle->gettriangleheightb());
	delete triangle;
	return output;
}
double Tests::TriangleGetterHeightc() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heightc = 6;
	double output = (triangle->gettriangleheightc());
	delete triangle;
	return output;
}
double Tests::Trianglearea() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = 2;
	triangle->heighta = 3;
	double output = (triangle->gettrianglearea());
	delete triangle;
	return output;
}
double Tests::Triangleperimeter() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = 1;
	triangle->sideb = 2;
	triangle->sidec = 3;
	double output = (triangle->gettriangleperimeter());
	delete triangle;
	return output;
}
double Tests::Trianglefindheighta() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleB = 63;
	triangle->angleC = 29;
	triangle->sidea = 4;
	triangle->triangleheighta();
	double output = (1.7 <= triangle->gettriangleheighta() && 1.8 >= triangle->gettriangleheighta());
	delete triangle;
	return output;
}
double Tests::Trianglefindheightb() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = 34;
	triangle->angleC = 29;
	triangle->sideb = 3;
	triangle->triangleheightb();
	double output = (0.9 <= triangle->gettriangleheightb() && 1.0 >= triangle->gettriangleheightb());
	delete triangle;
	return output;
}
double Tests::Trianglefindheightc() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = 34;
	triangle->angleB = 29;
	triangle->sidec = 3;
	triangle->triangleheightc();
	double output = (0.9 <= triangle->gettriangleheightc() && 1.0 >= triangle->gettriangleheightc());
	delete triangle;
	return output;
}
//Rectangle
double Tests::Rectanglegetlength() {
	return 0;
}
double Tests::Rectanglegetwidth() {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = 33;
	double output = (33 <= rec->getrectanglelenght());
	delete rec;
	return output;
}
double Tests::Rectanglegetarea() {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = 2;
	rec->width = 3;
	double output = (6 <= rec->getrectanglearea());
	delete rec;
	return output;
}
double Tests::Rectanglegetperimeter() {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = 2;
	rec->width = 3;
	double output = (6 <= rec->getrectanglearea());
	delete rec;
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
