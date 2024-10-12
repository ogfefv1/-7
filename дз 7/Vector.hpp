//
//  Vector.hpp
//  дз 7
//
//  Created by Егор Джемлиханов on 29.09.2024.
//

#pragma once
#include <iostream>
using namespace std;

class Vector
{
    int* arr;
    int size;

public:
    Vector();
    Vector(int s);
    ~Vector();
    
   
    void InputRand();
    void Print();

    
    Vector& operator+=(int a);
    Vector& operator-=(int a);
    Vector& operator*=(int a);
    
    friend Vector operator-(int a, const Vector& vec);
    friend ostream& operator<<(ostream& os, const Vector& vec);
};
