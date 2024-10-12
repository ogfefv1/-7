//
//  Vector.cpp
//  дз 7
//
//  Created by Егор Джемлиханов on 29.09.2024.
//

#include "Vector.hpp"
#include <iostream>

using namespace std;

Vector::Vector() : arr(nullptr), size(0) {}

Vector::Vector(int s) : size(s)
{
    arr = new int[size] {0};
}

Vector::~Vector()
{
    delete[] arr;
}

void Vector::InputRand()
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 41 - 20; // [-20, 20]
    }
}

void Vector::Print()
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

Vector& Vector::operator+=(int a)
{
    int* temp = new int[size + a];
    for (int i = 0; i < size; ++i)
    {
        temp[i] = arr[i];
    }
    for (int i = size; i < size + a; ++i)
    {
        temp[i] = 0; // Добавляем нули
    }
    delete[] arr;
    arr = temp;
    size += a;
    return *this;
}

Vector& Vector::operator-=(int a)
{
    if (size >= a)
    {
        int* temp = new int[size - a];
        for (int i = 0; i < size - a; ++i)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        size -= a;
    }
    else
    {
        cout << "Ошибка: недостаточно элементов для уменьшения.\n";
    }
    return *this;
}

Vector& Vector::operator*=(int a)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] *= a;
    }
    return *this;
}

Vector operator-(int a, const Vector& vec)
{
    if (a >= vec.size)
    {
        cout << "Ошибка: недостаточно элементов для операции.\n";
        return Vector(0);
    }
    Vector result(vec.size - a);
    for (int i = 0; i < result.size; ++i)
    {
        result.arr[i] = vec.arr[i + a];
    }
    return result;
}

ostream& operator<<(ostream& os, const Vector& vec)
{
    for (int i = 0; i < vec.size; ++i)
    {
        os << vec.arr[i] << " ";
    }
    os << endl;
    return os;
}

