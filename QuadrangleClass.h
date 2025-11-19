#include "FigureClass.h"
#ifndef _QUADRANGLECLASS_H_
#define _QUADRANGLECLASS_H_

class Quadrangle : public Figure
{
protected:
    int length_a{}, length_b{}, length_c{}, length_d{};
    int angle_A{}, angle_B{}, angle_C{}, angle_D{};
public:
    Quadrangle(int length_a, int length_b, int length_c, int length_d,
        int angle_A, int angle_B, int angle_C, int angle_D);
    int GetLength_a();
    int GetLength_b();
    int GetLength_c();
    int GetLength_d();
    int GetAngle_A();
    int GetAngle_B();
    int GetAngle_C();
    int GetAngle_D();
};

#endif
