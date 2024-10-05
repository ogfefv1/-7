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
    Vector(const Vector & obj);

    Vector(int s);
    void InputRand();
    void Print(); 

    void PushBack(int a);
    int PopBack();

    // Перегрузка операторов
    Vector operator-(int a);
    Vector& operator++();
    Vector operator++(int);
    Vector& operator--();
    Vector operator--(int);
    Vector& operator+=(int a);
    Vector& operator-=(int a);
    Vector& operator*=(int a);
};
