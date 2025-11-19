#include "ParallelogramClass.h"

Parallelogram::Parallelogram(int longSide_length, int shortSide_length, int acute_angle, int obtuse_angle) :
    Quadrangle(shortSide_length, longSide_length, shortSide_length, longSide_length,
        acute_angle, obtuse_angle, acute_angle, obtuse_angle) {
    figureName = "Параллелограмм";
}
