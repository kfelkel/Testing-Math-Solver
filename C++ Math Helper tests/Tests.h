#ifndef Tests_H
#define Tests_H
#include <string>
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
	std::string Triangle_ostreamOperator(double sidea, double sideb, double sidec, double angleA, double angleB, double angleC);
	//Rectangle
	double Rectangle_getrectanglelength(double length);
	double Rectangle_getrectanglewidth(double width);
	double Rectangle_getrectanglearea(double length, double width);
	double Rectangle_getrectangleperimeter(double length, double width);
	std::string Rectangle_ostreamOperator(double length, double width);
	//return type? Rectangle_istreamOperator(double length, double width);
	//solveLinear
	std::string solveLinear_solveEquation(std::string equation);
	//Circle
	double Circle_getcirclediameter(double radius);
	double Circle_getcirclecircumference(double radius);
	double Circle_getcircleradius(double radius);
	double Circle_getcirclearea(double radius);
	//Ellipse
	static double Ellipse_getellipsemajoraxis(double majorAxis, double minorAxis);
	static double Ellipse_getellipseminoraxis(double majorAxis, double minorAxis);
	static double Ellipse_getellipsefoci(double majorAxis, double minorAxis);
	static double Ellipse_getellipsedirectrix(double majorAxis, double minorAxis);
	static double Ellipse_getellipsevertex(double majorAxis, double minorAxis);
	static double Ellipse_getellipsearea(double majorAxis, double minorAxis);
	//void Ellipse_ellipsesolve();
	//void ellipsefoci();
	//void ellipsedirectrix();
	//void ellipsevertex();
	//void ellipsearea();
		//To-Do
	//Cube
	//Cube();
	//Cube(double, double, double);
	static double Cube_getcubeheight(double length, double width, double height);
	static double Cube_getcubearea(double length, double width, double height);
	static double Cube_getcubeperimeter(double length, double width, double height);
	static double Cube_getcubevolume(double length, double width, double height);
	static std::string Cube_ostreamOperator(double length, double width, double height);
	//static void cubesolve();
	//static void cubearea();

	//friend  std::ostream& operator<<(std::ostream&, const Cube);
	//friend void operator>>(std::istream&, Cube&);
};
#endif // Tests_H



