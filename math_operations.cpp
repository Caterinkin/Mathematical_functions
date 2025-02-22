#include "math_operations.h"
#include <stdexcept> // Для исключения invalid_argument

// Сложение
double add(double a, double b) 
{
    return a + b;
}

// Вычитание
double subtract(double a, double b)
{
    return a - b;
}

// Умножение
double multiply(double a, double b) 
{
    return a * b;
}

// Деление
double divide(double a, double b) 
{
    if (b == 0) {
        throw std::invalid_argument("Деление на ноль не допускается.");
    }
    return a / b;
}

// Возведение в степень
double power(double a, double b)
{
    if (b < 0) {
        throw std::invalid_argument("Показатель степени должен быть неотрицательным целым числом");
    }

    double result = 1.0;
    for (int i = 0; i < b; ++i) 
    {
        result *= a;
    }
    return result;
}