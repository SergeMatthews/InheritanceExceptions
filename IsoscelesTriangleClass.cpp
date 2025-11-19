#include "IsoscelesTriangleClass.h"

IsoscelesTriangle::IsoscelesTriangle(int base_length, int sides_length, int base_angle, int top_angle) :
    Triangle(sides_length, base_length, sides_length, base_angle, top_angle, base_angle) {
    figureName = "Равнобедренный треугольник";
}
