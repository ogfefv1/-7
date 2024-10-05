//
//  main.cpp
//  дз 7
//
//  Created by Егор Джемлиханов on 29.09.2024.
//

//#include<iostream>
//#include"Vector.hpp"
//using namespace std;
//
//int main()
//{
//    srand(time(0));
//
//    Vector obj1(5);
//    obj1.InputRand();
//    obj1.Print();
//
//    Vector obj3 = obj1 - 2;
//    obj3.Print();
//    obj1.Print();
//
//    Vector obj2 = obj1 + 5;
//    obj2.Print();
//
//    Vector obj4(2);
//    obj4.InputRand();
//    obj4.Print();
//
//    Vector obj5 = obj1 + obj4;
//    obj5.Print();
//
//    Vector obj6 = obj1 * 3;
//    obj6.Print();
//
//    return 0;
//}













//#include<iostream>
//#include"Vector.hpp"
//using namespace std;
//
//int main()
//{
//    srand(time(0));
//
//    Vector obj1(5); //-------------  1 2 3 4 5
//    obj1.InputRand();
//    obj1.Print();
//
//    Vector obj3 = obj1 - 2;// 1 2 3
//    obj3.Print();
//    obj1.Print();
//
//    /*
//     *
//     * Vector obj4 = ++obj1; // obj4 = 0 1 2 3 4 5   obj1 = 0 1 2 3 4 5
//     * Vector obj5 = obj1++; // obj5 = 1 2 3 4 5     obj1 = 0 1 2 3 4 5
//     * Здесь есть ошибки (obj5--, --ob5)
//     * Vector obj6(3); // 1 2 3
//     * obj6+=5; // 1 2 3 0 0 0 0 0
//     * obj6-=5; // Нужно проверить условия перед вычитанием 5 элементов. Размер >=5, иначе возникнет ошибка
//     * obj6*=5; // Увеличивает все элементы на 5, проверка на переполнение необходима
//     */
//
//
//
//
//    
//
//
//}












#include<iostream>
#include"Vector.hpp"
using namespace std;

int main()
{
    srand(time(0));

    Vector obj1(5); //-------------  1 2 3 4 5
    obj1.InputRand();
    obj1.Print();

    Vector obj3 = obj1 - 2;// 1 2 3
    obj3.Print();
    obj1.Print();

    
     
//      Vector obj4 = ++obj1; // obj4 = 0 1 2 3 4 5   obj1 = 0 1 2 3 4 5
//      Vector obj5 = obj1++; // obj5 = 1 2 3 4 5     obj1 = 0 1 2 3 4 5
//      Vector obj6(3); // 1 2 3
//      obj6+=5; // 1 2 3 0 0 0 0 0
//      obj6-=5; // Нужно проверить условия перед вычитанием 5 элементов. Размер >=5, иначе возникнет ошибка
//      obj6*=5; // Увеличивает все элементы на 5
    
    
    Vector obj4 = ++obj1;
    obj4.Print();
    obj1.Print();

    Vector obj5 = obj1++;
    obj5.Print();
    obj1.Print();

    Vector obj6(3);
    obj6.InputRand();
    obj6.Print();
    
    obj6 += 5;
    obj6.Print();

    obj6 -= 5;
    obj6.Print();

    obj6 *= 5;
    obj6.Print();

    return 0;
}
