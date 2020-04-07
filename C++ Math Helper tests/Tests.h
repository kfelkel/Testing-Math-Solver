#ifndef Tests_H
#define Tests_H
class Tests {
public:
	void runTests();
	double AAS_AASangleB(double angleA, double angleC);
	double AAS_AASsidea(double angleA, double angleC, double sidec);
	double AAS_AASsideb(double angleA, double angleC, double sidec);
	double SAS_SASsidea(double sideb, double sidec, double angleA);
	double SAS_SASangleB(double sidea, double sideb, double sidec);
	double SAS_SASangleC(double sidea, double sideb, double sidec);
	double SSA_SSAangleC(double angleB, double sideb, double sidec);
	double SSA_SSAangleA(double angleB, double angleC);
	double SSA_SSAsidea(double angleA, double angleC, double sidec);
	double SSS_SSSangleA(double sidea, double sideb, double sidec);
	double SSS_SSSangleB(double sidea, double sideb, double sidec);
	double SSS_SSSangleC(double sidea, double sideb, double sidec);
	double TriangleGetterA();
	double TriangleGetterB();
	double TriangleGetterC();
	double TriangleGettera();
	double TriangleGetterb();
	double TriangleGetterc();
	double Trianglearea();
	double Triangleperimeter();
	double TriangleGetterHeighta();
	double TriangleGetterHeightb();
	double TriangleGetterHeightc();
	double Trianglefindheighta();
	double Trianglefindheightb();
	double Trianglefindheightc();
	double Rectanglegetlength();
	double Rectanglegetwidth();
	double Rectanglegetarea();
	double Rectanglegetperimeter();
	double Circle_getcirclediameter(double radius);
	double Circle_getcirclecircumference(double radius);
};
#endif // Tests_H



