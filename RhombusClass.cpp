#include "RhombusClass.h"
#include "CreationErrorClass.h"

Rhombus::Rhombus(int side_length, int acute_angle, int obtuse_angle) :
    Parallelogram(side_length, side_length, acute_angle, obtuse_angle) 
{
    figureName = "Ромб";
    if ((angle_A != angle_C) || (angle_B != angle_D))
        throw creation_error("Ошибка создания фигуры. Углы попарно не равны");
    if ((length_a != length_b) || (length_b != length_c) || (length_c != length_d))
        throw creation_error("Ошибка создания фигуры. Стороны не равны");
}
