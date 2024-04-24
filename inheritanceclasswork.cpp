
// :: name -> scope resolution opreator

// //  inheritance

// // by using inheritance we can move object of one class to another

// // # include <iostream>
// // using namespace ;

// // class inheritance
// // {
// // public:

// // string a ;
// // void fun1 (){
// //     cout<<"this is my function";
// // }
// // };

// // class inheritance2 :public inheritance{};

// // int main(){
// // inheritance obj;
// // obj.fun1();
// // }

#include <iostream>
using namespace std;

// int main()
// {

//     int a = 5;
//     int b = 5;

//     int sum = a + b;
// }

// ......................................................................................

// #include <iostream>

// using namespace std;

// class step

// {
// public:
//     int a = 10;
// };

// class inherit : public step
// {
// public:
//     int a = 20;
// };

// int main()
// {
//     inherit obj;
//     cout << obj.a << endl;
//     cout << obj.step::a;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Size of char: " << sizeof(char) << " bytes" << endl;
//     cout << "Size of int: " << sizeof(int) << " bytes" << endl;
//     cout << "Size of float: " << sizeof(float) << " bytes" << endl;
//     cout << "Size of double: " << sizeof(double) << " bytes" << endl;
//     // And so on...
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    
    int r ;
    cout<<"Please enter roes: ";
cin>>r ;

for(int i = 1; i <= r; i++){
    
    for(int j = 1; j<= r; j++){
        
        if(i==1 || i==r || j==1 || j==r){
            
            cout<<"* ";
        }
        
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
    
}