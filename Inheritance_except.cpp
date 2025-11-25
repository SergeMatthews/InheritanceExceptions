#include <iostream>
#include <string>

#include "FigureClass.h"

#include "TriangleClass.h"
#include "RightTriangleClass.h"
#include "IsoscelesTriangleClass.h"
#include "EquilateralTriangleClass.h"

#include "QuadrangleClass.h"
#include "ParallelogramClass.h"
#include "RhombusClass.h"
#include "RectangleClass.h"
#include "SquareClass.h"

#include "CreationErrorClass.h"

using std::cout;
using std::cerr;
using std::endl;
using std::string;

void PrintInfo(Triangle* pTriangle);
void PrintInfo(Quadrangle* pQuadrangle);

int main()
{
    setlocale(LC_ALL, "RU");
    try {
        Triangle triObj(10, 20, 30, 50, 60, 70);
        PrintInfo(&triObj);
    }
    catch (const creation_error& ex) {
        cerr << ex.what() << endl;
    }
    try {
        IsoscelesTriangle iscTriObj(10, 20, 50, 80);
        PrintInfo(&iscTriObj);
    }
    catch (const creation_error& ex) {
        cerr << ex.what() << endl;
    }
    try {
        Quadrangle quadObj(10, 20, 30, 40, 50, 60, 70, 80);
        PrintInfo(&quadObj);
    }
    catch (const creation_error& ex) {
        cerr << ex.what() << endl;
    }
    try {
        Parallelogram parObj1(30, 15, 70, 130);
        PrintInfo(&parObj1);
    }
    catch (const creation_error& ex) {
        cerr << ex.what() << endl;
    }
    try {
        Parallelogram parObj2(30, 15, 70, 110);
        PrintInfo(&parObj2);
    }
    catch (const creation_error& ex) {
        cerr << ex.what() << endl;
    }
    try {
        RightTriangle rTriObj2(10, 15, 30, 50, 30);
        PrintInfo(&rTriObj2);
    }
    catch (const creation_error& ex) {
        cerr << ex.what() << endl;
    }
    return EXIT_SUCCESS;
}

void PrintInfo(Triangle* pTriangle) {
    cout << pTriangle->GetFigureName() << " (стороны " << pTriangle->GetLength_a() << ", " << pTriangle->GetLength_b() << ", " << pTriangle->GetLength_c() \
        << ", углы " << pTriangle->GetAngle_A() << ", " << pTriangle->GetAngle_B() << ", " << pTriangle->GetAngle_C() << ") " << endl;
}

void PrintInfo(Quadrangle* pQuadrangle) {
    cout << pQuadrangle->GetFigureName() << " (стороны " << pQuadrangle->GetLength_a() << ", " << pQuadrangle->GetLength_b()\
        << ", " << pQuadrangle->GetLength_c() << ", " << pQuadrangle->GetLength_d() \
        << ", углы " << pQuadrangle->GetAngle_A() << ", " << pQuadrangle->GetAngle_B()\
        << ", " << pQuadrangle->GetAngle_C() << ", " <<pQuadrangle->GetAngle_D() << ") " << endl;
}
