#ifndef SSS_H
#define SSS_H
#include "triangle.h"

namespace sss
{
class SSS:public triangle::Triangle
{
public:
    SSS();
    SSS(double,double,double);
    void SSSsolve();
    void SSSangleA();
    void SSSangleB();
    void SSSangleC();
    friend void operator>>(std::istream&,SSS&);
};
}
#endif // SSS_H
