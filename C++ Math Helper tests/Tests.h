#ifndef Tests_H
#define Tests_H
class Tests {
public:
	void runTests();
	double AASfindangleB();
	double AASfindsidea();
	double AASfindsideb();
	double SASfindsidea();
	double SASfindangleB();
	double SASfindangleC();
	double SSAfindangleC();
	double SSAfindangleA();
	double SSAfindsidea();
	double SSSfindangleA();
	double SSSfindangleB();
	double SSSfindangleC();
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
		//To-Do
};
#endif // Tests_H



