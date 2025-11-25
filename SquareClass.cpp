#include "SquareClass.h"
#include "CreationErrorClass.h"

Square::Square(int length) : Rectangle(length, length) {
    figureName = "Квадрат";
    if ((angle_A != angle_B) || (angle_B != angle_C) || (angle_C != angle_D) || (angle_A != 90))
        throw creation_error("Ошибка создания фигуры. Углы не равны 90 градусов");
    if ((length_a != length_b) || (length_b != length_c) || (length_c != length_d))
        throw creation_error("Ошибка создания фигуры. Стороны попарно не равны");
}
