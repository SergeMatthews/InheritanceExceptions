#include "RectangleClass.h"

Rectangle::Rectangle(int longSide_length, int shortSide_length) :
    Parallelogram(longSide_length, shortSide_length, 90, 90) {
    figureName = "Прямоугольник";
}
