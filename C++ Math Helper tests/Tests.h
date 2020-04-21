#ifndef Tests_H
#define Tests_H
class Tests {
public:
	//void runTests();
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
	//Triangle
	double Triangle_gettriangleangleA(double angleA);
	double Triangle_gettriangleangleB(double angleB);
	double Triangle_gettriangleangleC(double angleC);
	double Triangle_gettrianglesidea(double sideb);
	double Triangle_gettrianglesideb(double sideb);
	double Triangle_gettrianglesidec(double sidec);
	double Triangle_gettriangleheighta(double heighta);
	double Triangle_gettriangleheightb(double heightb);
	double Triangle_gettriangleheightc(double heightc);
	double Triangle_gettrianglearea(double sidea, double heighta);
	double Triangle_gettriangleperimeter(double sidea, double sideb, double sidec);
	double Triangle_triangleheighta(double angleB, double angleC, double sidea);
	double Triangle_triangleheightb(double angleA, double angleB, double sideb);
	double Triangle_triangleheightc(double angleA, double angleB, double sidec);
	//Rectangle
	double Rectangle_getrectanglelength(double length);
	double Rectangle_getrectanglewidth(double width);
	double Rectangle_getrectanglearea(double length, double width);
	double Rectangle_getrectangleperimeter(double length, double width);
	//Circle
	double Circle_getcirclediameter(double radius);
	double Circle_getcirclecircumference(double radius);
	double Circle_getcircleradius(double radius);
	double Circle_getcirclearea(double radius);
	//Ellipse
	//Ellipse();
	//Ellipse(double, double);
	//double Ellipse_getellipsemajoraxis();
	//double Ellipse_getellipseminoraxis();
	//double Ellipse_getellipsefoci();
	//double Ellipse_getellipsedirectrix();
	//double Ellipse_getellipsevertex();
	//double Ellipse_getellipsearea();
	//void ellipsesolve();
	//void ellipsefoci();
	//void ellipsedirectrix();
	//void ellipsevertex();
	//void ellipsearea();
		//To-Do
};
#endif // Tests_H



