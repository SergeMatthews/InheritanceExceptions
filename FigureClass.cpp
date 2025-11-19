#include "FigureClass.h"
#include<string>


Figure::Figure(std::string figureName, int sidesNumber) : figureName(figureName), sidesNumber(sidesNumber)
{}
Figure::Figure() : Figure("Фигура", 0)
{}
std::string Figure::GetFigureName() {
    return figureName;
}
int Figure::GetSidesNumber() {
    return sidesNumber;
}
