#include "RectangleClass.h"
#include "CreationErrorClass.h"


Rectangle::Rectangle(int longSide_length, int shortSide_length) :
    Parallelogram(longSide_length, shortSide_length, 90, 90) 
{
    figureName = "Прямоугольник";
    if ((angle_A != angle_B) || (angle_B != angle_C) || (angle_C != angle_D) || (angle_A != 90))
        throw creation_error("Ошибка создания фигуры. Углы не равны 90 градусов");
    if ((length_a != length_c) || (length_b != length_d))
        throw creation_error("Ошибка создания фигуры. Стороны попарно не равны");
}
