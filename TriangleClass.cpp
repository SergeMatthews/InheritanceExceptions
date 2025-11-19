#include "TriangleClass.h"
#include "CreationErrorClass.h"


Triangle::Triangle(int length_a, int length_b, int length_c, int angle_A, int  angle_B, int angle_C)
    : Figure("Треугольник", 3),
    length_a(length_a), length_b(length_b), length_c(length_c),
    angle_A(angle_A), angle_B(angle_B), angle_C(angle_C)
{
    if (180 != (angle_A + angle_B + angle_C))
        throw creation_error("Ошибка создания фигуры. Причина: сумма углов не равна 180");
}
int Triangle::GetLength_a() {
    return length_a;
}
int Triangle::GetLength_b() {
    return length_b;
}
int Triangle::GetLength_c() {
    return length_c;
}
int Triangle::GetAngle_A() {
    return angle_A;
}
int Triangle::GetAngle_B() {
    return angle_B;
}
int Triangle::GetAngle_C() {
    return angle_C;
}
