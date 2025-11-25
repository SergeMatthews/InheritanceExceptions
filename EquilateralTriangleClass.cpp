#include "EquilateralTriangleClass.h"
#include "CreationErrorClass.h"

EquilateralTriangle::EquilateralTriangle(int side_length) : IsoscelesTriangle(side_length, side_length, 60, 60) 
{
    figureName = "Равносторонний треугольник";
    if ((angle_A != angle_B) || (angle_B != angle_C))
        throw creation_error("Ошибка создания фигуры. Углы не равны");
    if ((length_a != length_b) || (length_b != length_c))
        throw creation_error("Ошибка создания фигуры. Стороны не равны");
}
