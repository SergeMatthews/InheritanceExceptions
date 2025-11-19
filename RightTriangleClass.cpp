#include "RightTriangleClass.h"

RightTriangle::RightTriangle(int length_a, int length_b, int length_c, int angle_A, int  angle_B) :
    Triangle(length_a, length_b, length_c, angle_A, angle_B, 90)
{
    figureName = "Прямоугольный треугольник";
}
