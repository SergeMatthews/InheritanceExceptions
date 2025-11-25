IsoscelesTriangle::IsoscelesTriangle(int base_length, int sides_length, int base_angle, int top_angle) :
    Triangle(sides_length, base_length, sides_length, base_angle, top_angle, base_angle) 
{
    figureName = "Равнобедренный треугольник";
    if (angle_A != angle_C)
        throw creation_error("Ошибка создания фигуры. Углы A и C не равны");
    if (length_a != length_c)
        throw creation_error("Ошибка создания фигуры. Стороны a и c не равны");
}
