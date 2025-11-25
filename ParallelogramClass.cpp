#include "ParallelogramClass.h"
#include "CreationErrorClass.h"

Parallelogram::Parallelogram(int longSide_length, int shortSide_length, int acute_angle, int obtuse_angle) :
    Quadrangle(shortSide_length, longSide_length, shortSide_length, longSide_length,
        acute_angle, obtuse_angle, acute_angle, obtuse_angle) 
{
    figureName = "Параллелограмм";
    if ((angle_A != angle_C) || (angle_B != angle_D))
        throw creation_error("Ошибка создания фигуры. Углы попарно не равны");
    if ((length_a != length_c) || (length_b != length_d))
        throw creation_error("Ошибка создания фигуры. Стороны попарно не равны");
}
