//
//  Vector.hpp
//  дз 7
//
//  Created by Егор Джемлиханов on 29.09.2024.
//

#pragma once
class Vector
{
    int* arr;
    int size;
public:
    Vector();
    ~Vector();
    Vector(const Vector& obj);

    Vector(int s);
    void InputRand();
    void Print();

    void PushBack(int a);
    int PopBack();

    Vector operator-(int a);
    Vector operator+(int a);
    Vector operator+(const Vector& other);
    Vector operator*(int scalar);
};

