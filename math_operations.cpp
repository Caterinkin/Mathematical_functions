#include "math_operations.h"
#include <stdexcept> // ��� ���������� invalid_argument

// ��������
double add(double a, double b) 
{
    return a + b;
}

// ���������
double subtract(double a, double b)
{
    return a - b;
}

// ���������
double multiply(double a, double b) 
{
    return a * b;
}

// �������
double divide(double a, double b) 
{
    if (b == 0) {
        throw std::invalid_argument("������� �� ���� �� �����������.");
    }
    return a / b;
}

// ���������� � �������
double power(double a, double b)
{
    if (b < 0) {
        throw std::invalid_argument("���������� ������� ������ ���� ��������������� ����� ������");
    }

    double result = 1.0;
    for (int i = 0; i < b; ++i) 
    {
        result *= a;
    }
    return result;
}