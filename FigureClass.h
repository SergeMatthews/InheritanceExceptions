#ifndef _FIGURECLASS_H_
#define _FIGURECLASS_H_
#include <string>
class Figure
{
protected:
    std::string figureName{};
    int sidesNumber{};
protected:
    Figure(std::string figureName, int sidesNumber);
public:
    Figure(); 
    std::string GetFigureName(); 
    int GetSidesNumber();
};
#endif
