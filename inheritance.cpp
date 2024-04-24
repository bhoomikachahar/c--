
// #include <iostream>
// using namespace std;

// class amount{
//     public:
//     int current_amount = 0;
//     int add_amount;

//     int money(){

//     cout<<"your current balance is = "<<current_amount<<endl;
//     cout<<"Enter the balnce that you want to add = ";
//     cin>>add_amount;

//         cout<<"your current account balance is = "<<add_amount<<endl;
//         return 0;
//     };
// };

// class withdrawal_balance: public amount{
//     public:

//     int withrawal_money(){
//         int mywithdraw;
//         cout<<"Enter the amount that you want to withdraw = ";
//         cin>>mywithdraw;
//         if(add_amount >= mywithdraw){
//             cout<<"the withdrawal amount is = "<<mywithdraw<<endl;
//         }
//         else{
//             cout<<"insufficient balance"<<endl;
//             cout<<"your current account balance is = "<<add_amount<<endl;

//             return 0;

//         };
//         int total = add_amount - mywithdraw;
//         cout<<"your total balance is = "<<total;
//     };

// };

// int main(){
//     withdrawal_balance myobj;

//     myobj.money();
//     myobj.withrawal_money();
// }

// #include <iostream>

// using namespace std;

// class phone
// {

// public:
//     string name;
//     int amount;

//     void detail()
//     {

//         cout << "Enter your name : ";
//         cin >> name;
//         cout << "Your name is " << name << endl;

//         cout << "Enter the deposit amount : ";
//         cin >> amount;
//         cout << "your total amount is " << amount << endl;
//     }
// };

// class yournum : public phone
// {

// public:
//     string num;
//     string sim;

//     int money;

//     void number()
//     {

//         cout << "Enter your number : ";
//         cin >> num;

//         while (true)
//         {

//             if (num.length() == 10)
//             {
//                 cout << "Which is your sim?" << endl;
//                 cout << "VI" << endl;
//                 cout << "Jio" << endl;
//                 cout << "Airtel" << endl;
//                 cout << "BSNL" << endl;

//                 cout << "Enter your sim : ";
//                 cin >> sim;

//                 break;
//             }
//             else
//             {
//                 cout << "Enter your number : ";
//                 cin >> num;
//             }
//         };
//     }

//     void rechselect()
//     {

//         int selectrech;

//         cout << " please select the recharge plan : \n 1. 250 \n 2. 399 \n 3.699 \n ";
//         cin >> selectrech;
//         cout << selectrech;

//         while (true)
//         {

//             cout << "money : ";
//             cin >> money;

//             if (money >= amount)
//             {
//                 cout << "Recharge successfully";

//                 break;
//             }

//             else
//             {
//                 cout << "money : ";
//                 // cin >> money;
//             }
//         };
//     };
// };

// int main()
// {

//     cout << "Mobile recharge" << endl;

//     phone person;
//     person.detail();

//     yournum numchek;
//     numchek.number();

//     yournum selectrupee;
//     selectrupee.rechselect();
// }







