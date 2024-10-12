//
//  main.cpp
//  дз 7
//
//  Created by Егор Джемлиханов on 29.09.2024.
//

#include <iostream>
#include "Vector.hpp"

using namespace std;

int main()
{
    Vector obj1(5);
    obj1.InputRand();
    cout << "Вектор obj1: ";
    cout << obj1;

    obj1 += 5;
    cout << "После obj1 += 5: ";
    cout << obj1;

    obj1 -= 3;
    cout << "После obj1 -= 3: ";
    cout << obj1;

    obj1 *= 2;
    cout << "После obj1 *= 2: ";
    cout << obj1;

    Vector obj2 = 2 - obj1; 
    cout << "Новый вектор obj2 = 2 - obj1: ";
    cout << obj2;

    return 0;
}
