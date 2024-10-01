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
    delete[] arr;
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
        arr[i] = rand()%41 - 20;
    }
}

void Vector::Print() {
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


Vector Vector::operator- (int a)
{
    Vector rez(size - a);
    for (int i = 0; i < rez.size; i++)
    {
        rez.arr[i] = arr[i];
    }
    return rez;
}


Vector Vector::operator+ (int a)
{
    Vector rez(size + a);
    for (int i = 0; i < size; i++)
    {
        rez.arr[i] = arr[i];
    }
    return rez;
}

Vector Vector::operator+ (const Vector& other)
{
    Vector rez(size + other.size);
    for (int i = 0; i < size; i++)
    {
        rez.arr[i] = arr[i];
    }
    for (int i = 0; i < other.size; i++)
    {
        rez.arr[i + size] = other.arr[i];
    }
    return rez;
}


Vector Vector::operator* (int scalar)
{
    Vector rez(size);
    for (int i = 0; i < size; i++)
    {
        rez.arr[i] = arr[i] * scalar;
    }
    return rez;
}
