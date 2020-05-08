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

	//solveLinear
	std::string solveLinear_solveEquation(std::string equation);
	std::string solveLinear_getEquation(std::string equation);

	//Polygon
	double Polygon_getpolygonsides(double sides);
	double Polygon_getpolygonlength(double length);
	double Polygon_polygonapothem(double sides, double length);
	double Polygon_polygonradius(double sides, double length);
	double Polygon_polygonarea(double sides, double length);
	double Polygon_polygonperimeter(double sides, double length);
	std::string Polygon_ostreamOperator(double sides, double length);
	//Circle
	static double Circle_getcirclediameter(double radius);
	static double Circle_getcirclecircumference(double radius);
	static double Circle_getcircleradius(double radius);
	static double Circle_getcirclearea(double radius);
	static std::string Circle_ostreamOperator(double radius);
	//Ellipse
	static double Ellipse_getellipsemajoraxis(double majorAxis, double minorAxis);
	static double Ellipse_getellipseminoraxis(double majorAxis, double minorAxis);
	static double Ellipse_getellipsefoci(double majorAxis, double minorAxis);
	static double Ellipse_getellipsedirectrix(double majorAxis, double minorAxis);
	static double Ellipse_getellipsevertex(double majorAxis, double minorAxis);
	static double Ellipse_getellipsearea(double majorAxis, double minorAxis);
	static std::string Ellipse_ostreamOperator(double majorAxis, double minorAxis);

	//Cube
	static double Cube_getcubeheight(double length, double width, double height);
	static double Cube_getcubearea(double length, double width, double height);
	static double Cube_getcubeperimeter(double length, double width, double height);
	static double Cube_getcubevolume(double length, double width, double height);
	static std::string Cube_ostreamOperator(double length, double width, double height);

	//Parabola
	static double Parabola_getparabolavaluea(double valuea, double valueb, double valuec);
	static double Parabola_getparabolavalueb(double valuea, double valueb, double valuec);
	static double Parabola_getparabolavaluec(double valuea, double valueb, double valuec);
	static double Parabola_getparabolavertexX(double valuea, double valueb, double valuec);
	static double Parabola_getparabolavertexY(double valuea, double valueb, double valuec);
	static double Parabola_getparaboladirectrix(double valuea, double valueb, double valuec);
	static double Parabola_getparabolafocus(double valuea, double valueb, double valuec);
	static std::string Parabola_ostreamOperator(double valuea, double valueb, double valuec);

	//Polygon3d
	static double Polygon3D_getpolygon3dheight(int sides, double length, double height);
	static double Polygon3D_getpolygon3darea(int sides, double length, double height);
	static double Polygon3D_getpolygon3dperimeter(int sides, double length, double height);
	static double Polygon3D_getpolygon3dvolume(int sides, double length, double height);
	static std::string Polygon3D_ostreamOperator(int sides, double length, double height);

	//Pyramid
	static double Pyramid_getpyramidheight(int sides, double length, double height);
	static double Pyramid_getpyramidlateraledgelength(int sides, double length, double height);
	static double Pyramid_getpyramidslantheight(int sides, double length, double height);
	static double Pyramid_getpyramidarea(int sides, double length, double height);
	static double Pyramid_getpyramidperimeter(int sides, double length, double height);
	static double Pyramid_getpyramidvolume(int sides, double length, double height);
	static std::string Pyramid_ostreamOperator(int sides, double length, double height);
};
#endif // Tests_H



