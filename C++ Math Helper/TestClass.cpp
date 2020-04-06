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
	//AAS
	std::cout <<"AAS Angle B: " <<AASfindangleB() << std::endl;
	std::cout <<"AAS side a: " << AASfindsidea() << std::endl;
	std::cout <<"AAS side b: " << AASfindsideb() << std::endl;
	//SAS
	std::cout <<"SAS side a: " << SASfindsidea() << std::endl;
	std::cout <<"SAS angle B: " << SASfindangleB() << std::endl;
	std::cout <<"SAS angle C: " << SASfindangleC() << std::endl;
	//SSA
	std::cout <<"SSA angle C: " << SSAfindangleC() << std::endl;
	std::cout <<"SSA angle A: " << SSAfindangleA() << std::endl;
	std::cout <<"SSA side a: " << SSAfindsidea() << std::endl;
	//SSS
	std::cout <<"SSS angle A: " << SSSfindangleA() << std::endl;
	std::cout <<"SSS angle B: " << SSSfindangleB() << std::endl;
	std::cout <<"SSS angle C: " << SSSfindangleC() << std::endl;
	//Triangle
	std::cout << "Triangle Getter A: " << TriangleGetterA() << std::endl;
	std::cout << "Triangle Getter B: " << TriangleGetterB() << std::endl;
	std::cout << "Triangle Getter C: " << TriangleGetterC() << std::endl;
	std::cout << "Triangle Getter a: " << TriangleGettera() << std::endl;
	std::cout << "Triangle Getter b: " << TriangleGetterb() << std::endl;
	std::cout << "Triangle Getter c: " << TriangleGetterc() << std::endl;
	std::cout << "Triangle Getter Height a: " << TriangleGetterHeighta() << std::endl;
	std::cout << "Triangle Getter Height b: " << TriangleGetterHeightb() << std::endl;
	std::cout << "Triangle Getter Height c: " << TriangleGetterHeightc() << std::endl;
	std::cout << "Triangle area: " << Trianglearea() << std::endl;
	std::cout << "Triangle area: " << Triangleperimeter() << std::endl;
	std::cout << "Triangle Height a: " << Trianglefindheighta() << std::endl;
	std::cout << "Triangle Height b: " << Trianglefindheightb() << std::endl;
	std::cout <<"Triangle Height c: "<< Trianglefindheightc() << std::endl;
	//Rectangle
	std::cout << "Rectangle length: " << Rectanglegetlength() << std::endl;
	std::cout << "Rectangle width: " << Rectanglegetwidth() << std::endl;


}
//AAS
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
//SAS
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
//SSA
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
//SSS
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
//Triangle
bool TestClass::TriangleGetterA() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleA = 30;
	bool output = (30 == triangle->gettriangleangleA());
	delete triangle;
	return output;
}
bool TestClass::TriangleGetterB() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleB = 30;
	bool output = (30 == triangle->gettriangleangleB());
	delete triangle;
	return output;
}
bool TestClass::TriangleGetterC() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->angleC = 30;
	bool output = (30 == triangle->gettriangleangleC());
	delete triangle;
	return output;
}
bool TestClass::TriangleGettera() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = 1;
	bool output = (1 == triangle->gettrianglesidea());
	delete triangle;
	return output;
}
bool TestClass::TriangleGetterb() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sideb = 2;
	bool output = (2 == triangle->gettrianglesideb());
	delete triangle;
	return output;
}
bool TestClass::TriangleGetterc() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidec = 3;
	bool output = (3 == triangle->gettrianglesidec());
	delete triangle;
	return output;
}
bool TestClass::TriangleGetterHeighta() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heighta = 4;
	bool output = (4 == triangle->gettriangleheighta());
	delete triangle;
	return output;
}
bool TestClass::TriangleGetterHeightb() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heightb = 5;
	bool output = (5 == triangle->gettriangleheightb());
	delete triangle;
	return output;
}
bool TestClass::TriangleGetterHeightc() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->heightc = 6;
	bool output = (6 == triangle->gettriangleheightc());
	delete triangle;
	return output;
}
bool TestClass::Trianglearea() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = 2;
	triangle->heighta = 3;
	bool output = (3 == triangle->gettrianglearea());
	delete triangle;
	return output;
}
bool TestClass::Triangleperimeter() {
	triangle::Triangle* triangle = new triangle::Triangle;
	triangle->sidea = 1;
	triangle->sideb = 2;
	triangle->sidec = 3;
	bool output = (6 == triangle->gettriangleperimeter());
	delete triangle;
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
//Rectangle
bool TestClass::Rectanglegetlength() {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = 20;
	bool output = (20 <= rec->getrectanglelenght());
	delete rec;
	return output;
}
bool TestClass::Rectanglegetwidth() {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = 33;
	bool output = (33 <= rec->getrectanglelenght());
	delete rec;
	return output;
}
bool TestClass::Rectanglegetarea() {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = 2;
	rec->width = 3;
	bool output = (6 <= rec->getrectanglearea());
	delete rec;
	return output;
}
bool TestClass::Rectanglegetperimeter() {
	rectangle::Rectangle* rec = new rectangle::Rectangle;
	rec->length = 2;
	rec->width = 3;
	bool output = (6 <= rec->getrectanglearea());
	delete rec;
	return output;
}

