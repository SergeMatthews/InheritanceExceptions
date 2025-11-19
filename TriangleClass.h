#include "FigureClass.h"
#ifndef _TRIANGLECLASS_H_
#define _TRIANGLECLASS_H_

class Triangle : public Figure
{
protected:
    int length_a{}, length_b{}, length_c{};
    int angle_A{}, angle_B{}, angle_C{};
public:
    Triangle(int length_a, int length_b, int length_c, int angle_A, int  angle_B, int angle_C); 
    int GetLength_a();
    int GetLength_b();
    int GetLength_c();
    int GetAngle_A();
    int GetAngle_B();
    int GetAngle_C();
};

#endif