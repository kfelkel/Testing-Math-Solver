#include "aas.h"

namespace aas
{
AAS::AAS():Triangle(){}
AAS::AAS(double A, double C, double c):Triangle(0,0,c,A,0,C ){}
void AAS::AASsolve()
{
    AASangleB();
    AASsidea();
    AASsideb();
    trianglesolve();
}
void AAS::AASangleB()
{
    angleB=180-angleA-angleC;
}
void AAS::AASsidea()
{
    sidea=(sidec*sin(angleA*M_PI/180))/(sin(angleC*M_PI/180));
}
void AAS::AASsideb()
{
    sideb=(sidec*sin(angleB*M_PI/180))/(sin(angleC*M_PI/180));
}
void operator>>(std::istream& ins,AAS& a)
{
    do
    {
        system("CLS");
        std::cout<<"What is angle A? ";
        ins>>a.angleA;
        std::cout<<"What is angle C? ";
        ins>>a.angleC;
        std::cout<<"What is side c? ";
        ins>>a.sidec;
    }while(a.angleA<=0 || a.angleC<=0 || a.sidec<=0);
}
}
