#include "TestClass.h"
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

void TestClass::runTests() {
	std::cout <<"AAS Angle B: " <<AASfindangleB() << std::endl;
	std::cout <<"AAS side a: " << AASfindsidea() << std::endl;
	std::cout <<"AAS side b: " << AASfindsideb() << std::endl;
	std::cout <<"SAS side a: " << SASfindsidea() << std::endl;
	std::cout <<"SAS angle B: " << SASfindangleB() << std::endl;
	std::cout <<"SAS angle C: " << SASfindangleC() << std::endl;
	std::cout <<"SSA angle C: " << SSAfindangleC() << std::endl;
	std::cout <<"SSA angle A: " << SSAfindangleA() << std::endl;
	std::cout <<"SSA side a: " << SSAfindsidea() << std::endl;
	std::cout <<"SSS angle A: " << SSSfindangleA() << std::endl;
	std::cout <<"SSS angle B: " << SSSfindangleB() << std::endl;
	std::cout <<"SSS angle C: " << SSSfindangleC() << std::endl;
	std::cout << "Triangle Height a: " << Trianglefindheighta() << std::endl;
	std::cout << "Triangle Height b: " << Trianglefindheightb() << std::endl;
	std::cout <<"Triangle Height c: "<< Trianglefindheightc() << std::endl;
}
bool TestClass::AASfindangleB() {
	aas::AAS* aas = new aas::AAS;
	aas->angleA = 120;
	aas->angleC = 10;
	aas->AASangleB();
	bool output = (50 == aas->gettriangleangleB ());
	delete aas;
	return output;
}
bool TestClass::AASfindsidea() {
	aas::AAS* aas = new aas::AAS;
	aas->angleA = 120;
	aas->angleC = 10;
	aas->sidec = 2;
	aas->AASsidea();
	bool output = (9.9 <= aas->gettrianglesidea() && 10.0>= aas->gettrianglesidea());
	delete aas;
	return output;
}
bool TestClass::AASfindsideb() {
	aas::AAS* aas = new aas::AAS;
	aas->angleB = 120;
	aas->angleC = 10;
	aas->sidec = 2;
	aas->AASsideb();
	bool output = (9.9 <= aas->gettrianglesideb() && 10 >= aas->gettrianglesideb());
	delete aas;
	return output;
}
bool TestClass::SASfindsidea() {
	sas::SAS* sas = new sas::SAS;
	sas->sideb = 2;
	sas->sidec = 3;
	sas->angleA= 47;
	sas->SASsidea();
	bool output = (2.1 <= sas->gettrianglesidea() && 2.2 >= sas->gettrianglesidea());
	delete sas;
	return output;
}
bool TestClass::SASfindangleB() {
	sas::SAS* sas = new sas::SAS;
	sas->sidea = 4;
	sas->sideb = 2;
	sas->sidec = 3;
	sas->SASangleB();
	bool output = (28.9 <= sas->gettriangleangleB() && 29 >= sas->gettriangleangleB());
	delete sas;
	return output;
}
bool TestClass::SASfindangleC() {
	sas::SAS* sas = new sas::SAS;
	sas->sidea = 4;
	sas->sideb = 2;
	sas->sidec = 3;
	sas->SASangleC();
	bool output = (46.5 <= sas->gettriangleangleC() && 46.6 >= sas->gettriangleangleC());
	delete sas;
	return output;
}
bool TestClass::SSAfindangleC() {
	ssa::SSA* ssa = new ssa::SSA;
	ssa->angleB = 24;
	ssa->sideb = 2;
	ssa->sidec = 3;
	ssa->SSAangleC();
	bool output = (37.5 <= ssa->gettriangleangleC() && 37.6 >= ssa->gettriangleangleC());
	delete ssa;
	return output;
}
bool TestClass::SSAfindangleA() {
	ssa::SSA* ssa = new ssa::SSA;
	ssa->angleB = 24;
	ssa->angleC = 66;
	ssa->SSAangleA();
	bool output = (90 <= ssa->gettriangleangleA() && 90 >= ssa->gettriangleangleA());
	delete ssa;
	return output;
}
bool TestClass::SSAfindsidea() {
	ssa::SSA* ssa = new ssa::SSA;
	ssa->angleA = 24;
	ssa->angleC = 66;
	ssa->sidec = 3;
	ssa->SSAsidea();
	bool output = (1.3 <= ssa->gettrianglesidea() && 1.4 >= ssa->gettrianglesidea());
	delete ssa;
	return output;
}
bool TestClass::SSSfindangleA() {
	sss::SSS* sss = new sss::SSS;
	sss->sidea = 2;
	sss->sideb = 3;
	sss->sidec = 4;
	sss->SSSangleA();
	bool output = (28.9 <= sss->gettriangleangleA() && 29 >= sss->gettriangleangleA());
	delete sss;
	return output;
}
bool TestClass::SSSfindangleB() {
	sss::SSS* sss = new sss::SSS;
	sss->sidea = 2;
	sss->sideb = 3;
	sss->sidec = 4;
	sss->SSSangleB();
	bool output = (46.5 <= sss->gettriangleangleB() && 46.6 >= sss->gettriangleangleB());
	delete sss;
	return output;
}
bool TestClass::SSSfindangleC() {
	sss::SSS* sss = new sss::SSS;
	sss->sidea = 2;
	sss->sideb = 3;
	sss->sidec = 4;
	sss->SSSangleC();
	bool output = (104.4 <= sss->gettriangleangleC() && 104.5 >= sss->gettriangleangleC());
	delete sss;
	return output;
}
bool TestClass::Trianglefindheighta() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleB = 63;
	triangle->angleC = 29;
	triangle->sidea = 4;
	triangle->triangleheighta();
	bool output = (1.7 <= triangle->gettriangleheighta() && 1.8 >= triangle->gettriangleheighta());
	delete triangle;
	return output;
}
bool TestClass::Trianglefindheightb() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = 34;
	triangle->angleC = 29;
	triangle->sideb = 3;
	triangle->triangleheightb();
	bool output = (0.9 <= triangle->gettriangleheightb() && 1.0 >= triangle->gettriangleheightb());
	delete triangle;
	return output;
}
bool TestClass::Trianglefindheightc() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = 34;
	triangle->angleB = 29;
	triangle->sidec = 3;
	triangle->triangleheightc();
	bool output = (0.9 <= triangle->gettriangleheightc() && 1.0 >= triangle->gettriangleheightc());
	delete triangle;
	return output;
}

