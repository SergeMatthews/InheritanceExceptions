#include "EquilateralTriangleClass.h"

EquilateralTriangle::EquilateralTriangle(int side_length) : IsoscelesTriangle(side_length, side_length, 60, 60) {
    figureName = "Равносторонний треугольник";
}
