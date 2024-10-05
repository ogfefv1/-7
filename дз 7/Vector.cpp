//
//  Vector.cpp
//  дз 7
//
//  Created by Егор Джемлиханов on 29.09.2024.
//

#include "Vector.hpp"
#include<iostream>
using namespace std;

Vector::Vector()
{
    arr = nullptr;
    size = 0;
}
Vector::Vector(int s)
{
    size = s;
    arr = new int[size] {0};
}
Vector::~Vector()
{
    cout << "Деструктор\n";
    delete[]arr;
    size = 0;
    
}
Vector::Vector(const Vector& obj)
{
    cout << "Конструктор копирования\n";
    size = obj.size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = obj.arr[i];
    }
}
void Vector::InputRand()
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand()%41 - 20; // [-20 +20]
    }
}
void Vector::Print()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n---------------------------------------------------\n";
}

void Vector::PushBack(int a)
{
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    temp[size] = a;

    delete[] arr;

    arr = temp;
    size++;
}

int Vector::PopBack()
{
    int* temp = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        temp[i] = arr[i];
    }
    int el = arr[size - 1]; 

    delete[] arr;
    arr = temp;
    size--;

    return el;
}

Vector Vector::operator-(int a)
{
    Vector rez(size - a); // 5 - 2 = 3
    for (int i = 0; i < rez.size; i++)
    {
        rez.arr[i] = arr[i];
    }
    return rez;
}

Vector& Vector::operator++()
{
    for (int i = 0; i < size; i++)
    {
        arr[i]++;
    }
    return *this;
}

Vector Vector::operator++(int)
{
    Vector temp = *this;
    for (int i = 0; i < size; i++)
    {
        arr[i]++;
    }
    return temp;
}

Vector& Vector::operator--()
{
    for (int i = 0; i < size; i++)
    {
        arr[i]--;
    }
    return *this;
}

Vector Vector::operator--(int)
{
    Vector temp = *this;
    for (int i = 0; i < size; i++)
    {
        arr[i]--;
    }
    return temp;
}

Vector& Vector::operator+=(int a)
{
    int* temp = new int[size + a];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = size; i < size + a; i++)
    {
        temp[i] = 0; 
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
        for (int i = 0; i < size - a; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        size -= a;
    }
    else
    {
        cout << "Ошибка: недостаточно элементов для вычитания\n";
    }
    return *this;
}

Vector& Vector::operator*=(int a)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= a;
    }
    return *this;
}
