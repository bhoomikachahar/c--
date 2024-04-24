poin

// Operator overloading->
// Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide special meaning to the user-defined data type. Operator overloading is used to overload or redefine most of the operators available in C++. It is used to perform the operation on the user-defined data type.
// Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide special meaning to the user-defined data type. Operator overloading is used to overload or redefine most of the operators available in C++. It is used to perform the operation on the user-defined data type.

// ...................................................................................................

// Operator overloading ->

// Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide special meaning to the user-defined data type. Operator overloading is used to overload or redefine most of the operators available in C++. It is used to perform the operation on the user-defined data type.

// operator overloding example ->

// #include <iostream>

// using namespace std;

// class Shape
// {
// private:
//     int length; // Length of a box
//     int width;

// public:
//     // Constructor definition
//     Shape(int l = 2, int w = 2)
//     {
//         length = l;
//         width = w;
//     }

//     double Area()
//     {
//         return length * width;
//     }

//     int operator+(Shape shapeIn)
//     {
//         return Area() + shapeIn.Area();
//     }
// };

// int main(void)
// {
//     Shape sh1(4, 4); // Declare shape1
//     Shape sh2(2, 6); // Declare shape2

//     int total = sh1 + sh2;
//     cout << "\nsh1.Area() = " << sh1.Area();
//     cout << "\nsh2.Area() = " << sh2.Area();
//     cout << "\nTotal = " << total;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// class firstclass
// {
// public:
//     int value;

//     void operator+(firstclass &operator)
//     {
//         cout << this->value*operator.value;
//     }
// };

// int main()

// {

//     firstclass obj1, obj2;
//     obj1.value = 10;
//     obj2.value = 20;
//     obj1 + obj2;
// }

