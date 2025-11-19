#include "RhombusClass.h"

Rhombus::Rhombus(int side_length, int acute_angle, int obtuse_angle) :
    Parallelogram(side_length, side_length, acute_angle, obtuse_angle) {
    figureName = "Ромб";
}
